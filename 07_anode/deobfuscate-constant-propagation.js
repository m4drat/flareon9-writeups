// 1. Total iterations - 1565
// 2. True branch for regular ints is never executed

let path = 'check_flag_standalone_unflattened_replaced_rand_calls.js' // process.argv[2];
let esprima = require('esprima');
let fs = require('fs');
let astring = require('astring');
let estraverse = require('estraverse');

let code = fs.readFileSync(path, 'utf8');
let tree = esprima.parse(code);

var total_replaced = 0;

deobfuscated = estraverse.replace(tree, {
    enter: function (node, parent) {
        if (node.type != 'CallExpression') return;
        if (node.callee.property == undefined) return;
        if (node.callee.property.name == 'floor' && node.arguments.length == 1) {
            total_replaced++;
            node = node.arguments[0];
            node.value = Math.floor(node.value);
            node.raw = node.value.toString();
        }
        return node;
    }
});

console.log('Replaced ' + total_replaced + ' floor calls');

// console.log(`Code size after ${formattedCode.length}.`);
// console.log(`Reduced by ${(sizeBeforeCleanup - formattedCode.length) / sizeBeforeCleanup * 100}%`);
// console.log(`The total number of unused functions: ${totalAmounUnusedFunctions}`);

fs.writeFileSync('check_flag_standalone_unflattened_replaced_floor.js', astring.generate(deobfuscated));
