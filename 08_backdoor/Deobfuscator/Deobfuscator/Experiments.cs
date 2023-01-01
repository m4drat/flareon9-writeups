using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection.Emit;
using System.Text;
using System.Threading.Tasks;

namespace Deobfuscator
{
    internal class Experiments
    {
        static void EnumerateTypes(string exePath)
        {
            System.Reflection.Assembly assembly = System.Reflection.Assembly.LoadFrom(exePath);
            System.Reflection.Module module = assembly.GetModule("FlareOn.Backdoor.exe");
            var dnlib_mod = ModuleDefMD.Load(module);

            foreach (var type in dnlib_mod.GetTypes())
            {
                Console.WriteLine();

                Console.WriteLine("Type: {0} with token - {1}", type.FullName, type.MDToken.Raw.ToString("X").PadLeft(8, '0'));
                if (type.BaseType != null)
                    Console.WriteLine("  Base type: {0}", type.BaseType.FullName);

                if (type.Methods.Count > 0)
                {
                    Console.WriteLine("  Methods: {0}", type.Methods.Count);
                    foreach (var method in type.Methods)
                        Console.WriteLine("    {0} - {1}", method.FullName, method.MDToken.Raw.ToString("X").PadLeft(8, '0'));
                }

                if (type.Fields.Count > 0)
                {
                    Console.WriteLine("  Fields: {0}", type.Fields.Count);
                    foreach (var field in type.Fields)
                        Console.WriteLine("    {0} - {1}", field.FullName, field.MDToken.Raw.ToString("X").PadLeft(8, '0'));
                }

                if (type.Properties.Count > 0)
                {
                    Console.WriteLine("  Properties: {0}", type.Properties.Count);
                    foreach (var prop in type.Properties)
                        Console.WriteLine("    {0} - {1}", prop.FullName, prop.MDToken.Raw.ToString("X").PadLeft(8, '0'));
                }

                if (type.Interfaces.Count > 0)
                {
                    Console.WriteLine("  Interfaces:");
                    foreach (var iface in type.Interfaces)
                        Console.WriteLine("    {0}", iface.Interface.FullName);
                }

                Console.WriteLine("  Events: {0}", type.Events.Count);
                Console.WriteLine("  Nested types: {0}", type.NestedTypes.Count);
            }
        }

        public static string Empty()
        {
            StackTrace stackTrace = new StackTrace();
            Console.WriteLine(stackTrace.GetFrame(0).GetMethod().ToString());

            return "";
        }

        public static void PrintStacktrace(string arg)
        {
            StackTrace stackTrace = new StackTrace();
            Console.WriteLine(stackTrace.GetFrame(0).GetMethod().ToString());
            Console.WriteLine(stackTrace.GetFrame(1).GetMethod().ToString());
            Console.WriteLine(stackTrace.GetFrame(2).GetMethod().ToString());
            Console.WriteLine(stackTrace.GetFrame(3).GetMethod().ToString());

            //return stackTrace.GetFrame(0).GetMethod().MetadataToken;
        }

        public static void Perform()
        {
            Empty();

            Type[] helloArgs = { typeof(string), typeof(int) };
            DynamicMethod hello = new DynamicMethod("",
                typeof(int),
                helloArgs,
                typeof(Program).Module);

            //DynamicILInfo dynamicILInfo = hello.GetDynamicILInfo();
            //var methodToCall = typeof(Program).Module.ResolveMethod(typeof(Program).GetMethod("PrintStacktrace").MetadataToken);
            //var method = dynamicILInfo.GetTokenFor(methodToCall.MethodHandle);

            ILGenerator il = hello.GetILGenerator(256);
            il.Emit(OpCodes.Ldarg_0);
            //il.EmitCall(OpCodes.Call, typeof(Console).GetMethod("WriteLine", new Type[] { typeof(string) }), null);
            il.EmitCall(OpCodes.Call, typeof(Program).GetMethod("PrintStacktrace"), null);
            il.Emit(OpCodes.Ldarg_1);
            il.Emit(OpCodes.Ret);

            object objRet = hello.Invoke(null, new object[] { "TEST", 42 });
            Console.WriteLine("hello.Invoke returned: " + objRet);

            //int metadataToken = 0;
            //Thread thread = new Thread(delegate ()
            //{
            //    metadataToken = (int)PrintStacktrace("123");
            //});
            //thread.Start();
            //thread.Join(10000);

            //DynamicMethod dynamicMethod = new DynamicMethod("PrintStacktraceWrapper", typeof(int), new Type[] { }, typeof(Program).Module);
            ////DynamicILInfo dynamicILInfo = dynamicMethod.GetDynamicILInfo();
            ////var methodToCall = typeof(Program).Module.ResolveMethod(metadataToken);
            ////var method = dynamicILInfo.GetTokenFor(methodToCall.MethodHandle);
            //var codeGen = dynamicMethod.GetILGenerator();
            //codeGen.Emit(OpCodes.Ldarg_0);
            //codeGen.EmitCall(OpCodes.Call, typeof(Program).GetMethod("PrintStacktrace"), null);
            //codeGen.Emit(OpCodes.Ldarg_1);
            //codeGen.Emit(OpCodes.Ret);

            //dynamicMethod.Invoke(null, BindingFlags.ExactBinding, null, new object[] { }, new CultureInfo("en-us"));

            //EnumerateTypes(inputFile);

            //foreach (KeyValuePair<string, string> entry in patcher.GetAllMethodsHashes())
            //    Console.WriteLine("Method: {0}, hash: {1}", entry.Key, entry.Value);
        }
    }
}
