using dnlib.DotNet.Emit;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace Deobfuscator
{
    internal class SystemReflectionPatcher
    {
        const string outname = "deobfuscated-system-refl.exe";
        static byte[] flared_70_il = new List<byte> { 0x00, 0x02, 0x73, 0x02, 0x00, 0x00, 0x06, 0x0A, 0x06, 0x16, 0x6F, 0x03, 0x00, 0x00, 0x06, 0x6F, 0x04, 0x00, 0x00, 0x06, 0x6F, 0x05, 0x00, 0x00, 0x06, 0x0B, 0x07, 0x28, 0x06, 0x00, 0x00, 0x06, 0x0C, 0x08, 0x28, 0x07, 0x00, 0x00, 0x06, 0x0D, 0x1A, 0x8D, 0x08, 0x00, 0x00, 0x02, 0x25, 0xD0, 0x09, 0x00, 0x00, 0x04, 0x28, 0x0A, 0x00, 0x00, 0x06, 0x09, 0x28, 0x0B, 0x00, 0x00, 0x06, 0x13, 0x04, 0x11, 0x04, 0x07, 0x03, 0x28, 0x0C, 0x00, 0x00, 0x06, 0x13, 0x05, 0x11, 0x05, 0x13, 0x06, 0x2B, 0x00, 0x11, 0x06, 0x2A }.ToArray();

        public static void SystemReflectionCreatePatch()
        {
            Assembly assembly = Assembly.LoadFrom(Program.BASE_PATH + "FlareOn.Backdoor.exe");
            Module module = assembly.GetModule("FlareOn.Backdoor.exe");
            AssemblyBuilder assemblyBuilder = AppDomain.CurrentDomain.DefineDynamicAssembly(new AssemblyName() { Name = "flareon_deobfuscated" }, AssemblyBuilderAccess.Save);

            foreach (var t in module.GetTypes())
                Console.WriteLine(t.Name);

            var target_class_str = "FlareOn.Backdoor.FLARE15";
            var target_class = assembly.GetType(target_class_str);
            if (target_class == null)
            {
                Console.WriteLine("Cannot find class: {0}", target_class_str);
                return;
            }
            var target_method_str = "flared_70";
            var target_method = target_class.GetMethod(target_method_str);
            if (target_method == null)
            {
                Console.WriteLine("Cannot find method: {0}", target_method_str);
                return;
            }
            int method_token = target_method.MetadataToken;
            Console.WriteLine("Got method token: {0}", method_token);

            MethodInfo methodInfo = (MethodInfo)module.ResolveMethod(method_token);
            MethodBase methodBase = module.ResolveMethod(method_token);

            Type[] parameter_types = new Type[methodBase.GetParameters().Length];
            for (int i = 0; i < methodBase.GetParameters().Length; i++)
                parameter_types[i] = methodBase.GetParameters()[i].ParameterType;

            ModuleBuilder moduleBuilder = assemblyBuilder.DefineDynamicModule("flareon_deobfuscated", outname);
            TypeBuilder typeBuilder = moduleBuilder.DefineType(target_class_str, TypeAttributes.Public);
            MethodBuilder methodBuilder = typeBuilder.DefineMethod("flare_70", MethodAttributes.Public | MethodAttributes.Static, methodInfo.ReturnType, parameter_types);

            methodBuilder.SetMethodBody(flared_70_il, methodInfo.GetMethodBody().MaxStackSize, null, null, null);

            typeBuilder.CreateType();
            assemblyBuilder.SetEntryPoint(methodBuilder.GetBaseDefinition(), PEFileKinds.ConsoleApplication);
            assemblyBuilder.Save(outname, PortableExecutableKinds.PE32Plus, ImageFileMachine.AMD64);
        }
    }
}
