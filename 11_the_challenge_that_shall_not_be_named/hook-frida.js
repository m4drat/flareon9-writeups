// Run as follows: frida -f .\11.exe -l hook_math_random.js

// var module_base = Process.findModuleByName("python37.dll").base;
// console.log("Module base: " + module_base);
// console.log("Hooking Math.random() on return...");

// var interceptor = Interceptor.attach(math_random_ret_ptr, {
//     onEnter(retval) {
//         console.log('RIP: ' + this.context.pc);
//         var rand_num_loc = ptr(this.context.rdi + 7);
//         console.log('Random number location: ' + rand_num_loc);
//         var random_num = Memory.readLong(rand_num_loc);
//         console.log('random val: ' + random_num);
//     }
// });

var pLoadLibrary = Module.findExportByName(null, 'LoadLibraryExW');
send({type: 'func_intercept',
      name: "LoadLibraryExW: " + pLoadLibrary});

var python37Loaded = false;

Interceptor.attach(pLoadLibrary, {
        onEnter: function (args) {
            send(`[+] Called LoadLibraryExW(${args[0].readUtf16String()})`);
            if (args[0].readUtf16String().includes("python37.dll"))
                python37Loaded = true;
        },
        onLeave: function (retval){
            if (python37Loaded) {
                var pPyNumXor = Module.findExportByName("python37.dll", 'PyNumber_Xor');
                send({type: 'func_intercept',
                      name: "PyNumber_Xor: " + pPyNumXor});

                var pPyLongAsLong = Module.findExportByName("python37.dll", 'PyLong_AsLong');
                send({type: 'func_intercept',
                      name: "PyLong_AsLong: " + pPyLongAsLong});
                var PyLongAsLongFunc = new NativeFunction(pPyLongAsLong, 'long', ['pointer']);

                Interceptor.attach(pPyNumXor, {
                    onEnter: function (args) {
                        // send(String.fromCharCode(PyLongAsLongFunc(args[0])));
                        send(`[+] Called PyNumber_Xor(${String.fromCharCode(PyLongAsLongFunc(args[0]))}, ...})`); // ${String.fromCharCode(PyLongAsLongFunc(args[1]))
                    },
                    onLeave: function (retval){
                        // send(`[+] PyNumber_Xor returned ${PyLongAsLongFunc(retval)}`);
                    }
                });
            }
            python37Loaded = false;
        }
    });