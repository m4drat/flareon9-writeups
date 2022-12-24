using System;
using dnlib.DotNet.Writer;
using dnlib.DotNet;
using System.Collections.Generic;
using System.Linq;
using dnlib.DotNet.Emit;
using System.Security.Cryptography;
using System.Diagnostics;
using System.Reflection;
using AsmResolver.PE.File;
using System.Text;

namespace Deobfuscator
{
    internal class DnlibPatcher
    {
        /// <summary>
        /// The obfuscated call base class. It contains the information about the obfuscated call (e.g. the target method, the origin method, the dispatcher method)
        /// </summary>
        public class ObfuscatedCall
        {
            public ObfuscatedCall(MethodDef target, MethodDef origin, MethodDef dispatcher)
            {
                this.target = target;
                this.origin = origin;
                this.dispatcher = dispatcher;
            }

            public MethodDef target;
            public MethodDef origin;
            public MethodDef dispatcher;
        }

        /// <summary>
        /// The obfuscated call with arguments class, inherits from ObfuscatedCall.
        /// Holds the information about the obfuscated call with arguments.
        /// </summary>
        public class ObfuscatedCallWithArgs : ObfuscatedCall
        {
            public ObfuscatedCallWithArgs(MethodDef target, MethodDef origin, MethodDef dispatcher, Dictionary<uint, int> keys, byte[] code)
                : base(target, origin, dispatcher)
            {
                this.keys = keys;
                this.code = code;
            }

            public Dictionary<uint, int> keys;
            public byte[] code;
        }

        /// <summary>
        /// The obfuscated call without arguments class, inherits from ObfuscatedCall.
        /// Holds the information about the obfuscated call without arguments.
        /// </summary>
        public class ObfuscatedCallNoArgs : ObfuscatedCall
        {
            public ObfuscatedCallNoArgs(MethodDef target, MethodDef origin, MethodDef dispatcher)
                : base(target, origin, dispatcher)
            {
            }
        }

        string inputFile;
        string outputFile;
        bool succDeobfuscated = false;
        ModuleDefMD inputModule;

        Assembly reflAssembly;
        Module reflModule;

        /// <summary>
        /// Initializes a new instance of the <see cref="DnlibPatcher"/> class.
        /// </summary>
        /// <param name="inputFile">The input file.</param>
        /// <param name="outputFile">The output file.</param>
        public DnlibPatcher(string inputFile, string outputFile)
        {
            this.inputFile = inputFile;
            this.outputFile = outputFile;

            this.reflAssembly = Assembly.LoadFrom(inputFile);
            this.reflModule = this.reflAssembly.GetModule("FlareOn.Backdoor.exe");

            var moduleContext = new ModuleContext();
            var asmResolver = new AssemblyResolver(moduleContext);
            var resolver = new Resolver(asmResolver);
            moduleContext.AssemblyResolver = asmResolver;
            moduleContext.Resolver = resolver;

            inputModule = ModuleDefMD.Load(inputFile, moduleContext);
            Console.WriteLine("Loaded module: " + inputModule.FullName);
        }

        /// <summary>
        /// Finds a field by its name.
        /// </summary>
        /// <param name="methodName">The name of the field.</param>
        /// <param name="className">The name of the class that contains the field.</param>
        /// <returns>The field if found, null otherwise.</returns>
        public FieldDef FindFieldByName(string methodName, string className = null)
        {
            foreach (var type in this.inputModule.Types)
            {
                if (className != null)
                    if (!type.FullName.Contains(className))
                        continue;

                foreach (var field in type.Fields)
                {
                    if (field.FullName.Contains(methodName))
                        return field;
                }
            }

            return null;
        }

        /// <summary>
        /// Finds a method by its name.
        /// </summary>
        /// <param name="methodName">The name of the method.</param>
        /// <param name="className">The name of the class that contains the method.</param>
        /// <returns>The method if found, null otherwise.</returns>
        public MethodDef FindMethodByName(string methodName, string className = null)
        {
            foreach (var type in this.inputModule.Types)
            {
                if (className != null)
                    if (!type.FullName.Contains(className))
                        continue;

                foreach (var method in type.Methods)
                {
                    if (method.FullName.Contains(methodName))
                        return method;
                }
            }

            return null;
        }

        /// <summary>
        /// Calculates hash for a method using its metadata token. The algorithm is ripped from the obfuscated assembly.
        /// </summary>
        /// <param name="metadataToken">The metadata token of the method.</param>
        /// <returns>The hash of the method.</returns>
        public string GetMethodHash(uint metadataToken)
        {
            Module module = this.reflModule;
            string text = "";
            string text2 = "";
            MethodInfo methodInfo = (MethodInfo)module.ResolveMethod((int)metadataToken);
            System.Reflection.MethodBody methodBody = methodInfo.GetMethodBody();
            byte[] bytes = Encoding.ASCII.GetBytes(methodInfo.Attributes.ToString());
            byte[] bytes2 = Encoding.ASCII.GetBytes(methodInfo.ReturnType.ToString());
            byte[] bytes3 = Encoding.ASCII.GetBytes(methodInfo.CallingConvention.ToString());
            foreach (ParameterInfo parameterInfo in methodInfo.GetParameters())
            {
                string text3 = text2;
                Type parameterType = parameterInfo.ParameterType;
                text2 = text3 + ((parameterType != null) ? parameterType.ToString() : null);
            }
            byte[] bytes4 = Encoding.ASCII.GetBytes(methodBody.MaxStackSize.ToString());
            byte[] bytes5 = BitConverter.GetBytes(methodBody.GetILAsByteArray().Length);
            foreach (LocalVariableInfo localVariableInfo in methodBody.LocalVariables)
            {
                string text4 = text;
                Type localType = localVariableInfo.LocalType;
                text = text4 + ((localType != null) ? localType.ToString() : null);
            }
            byte[] bytes6 = Encoding.ASCII.GetBytes(text);
            byte[] bytes7 = Encoding.ASCII.GetBytes(text2);
            IncrementalHash incrementalHash = IncrementalHash.CreateHash(HashAlgorithmName.SHA256);
            incrementalHash.AppendData(bytes5);
            incrementalHash.AppendData(bytes);
            incrementalHash.AppendData(bytes2);
            incrementalHash.AppendData(bytes4);
            incrementalHash.AppendData(bytes6);
            incrementalHash.AppendData(bytes7);
            incrementalHash.AppendData(bytes3);
            byte[] hashAndReset = incrementalHash.GetHashAndReset();
            StringBuilder stringBuilder = new StringBuilder(hashAndReset.Length * 2);
            for (int j = 0; j < hashAndReset.Length; j++)
            {
                stringBuilder.Append(hashAndReset[j].ToString("x2"));
            }
            return stringBuilder.ToString();
        }

        /// <summary>
        /// Calculates hashes for all methods in the assembly.
        /// </summary>
        /// <returns> A dictionary containing method names and their hashes. </returns>
        public Dictionary<string, string> GetAllMethodsHashes()
        {
            Dictionary<string, string> hashes = new Dictionary<string, string>();
            foreach (TypeDef typeDef in this.inputModule.Types)
            {
                foreach (MethodDef methodDef in typeDef.Methods)
                {
                    if (methodDef.HasBody)
                    {
                        try
                        {
                            hashes.Add(methodDef.Name, this.GetMethodHash(methodDef.MDToken.Raw));
                        }
                        catch
                        {
                            continue;
                        }
                    }
                }
            }

            return hashes;
        }

        /// <summary>
        /// Extracts the method flags from the method body.
        /// </summary>
        /// <param name="targetMethod"> The method to extract the flags from. </param>
        /// <returns> The method flags. </returns>
        private ushort GetMethodFlags(MethodDef targetMethod)
        {
            var reader = this.inputModule.Metadata.PEImage.CreateReader();
            reader.Position = (uint)this.inputModule.Metadata.PEImage.ToFileOffset(targetMethod.RVA);
            var flags = reader.ReadByte();
            Console.WriteLine(" Method: {0}, Tiny: {1}", targetMethod.Name, (flags & 3) == 2);

            if ((flags & 3) == 2)
                return flags;

            return (ushort)((reader.ReadByte() << 8) | flags);
        }

        /// <summary>
        /// Decrypts the method body (the actual code) using the obfuscator's decryption routine.
        /// </summary>
        /// <param name="key"> The key used to decrypt the method body. </param>
        /// <param name="code"> The encrypted method body. </param>
        /// <returns> The decrypted method body. </returns>
        private byte[] DecryptCode(byte[] key, byte[] code)
        {
            return Dumped.FLARE12.flared_47(key, code);
        }

        /// <summary>
        /// Loads the encrypted method body from the assembly.
        /// </summary>
        /// <param name="hash"> The hash of the method to load. </param>
        private byte[] LoadCodeByHash(string hash)
        {
            return Dumped.FLARE15.flare_69(hash, this.inputFile);
        }

        /// <summary>
        /// Deobfuscates the method body. This is the main method of the deobfuscator.
        /// </summary>
        /// <param name="funcName"> The name of the method to deobfuscate. </param>
        private void FixFlared(string funcName)
        {
            // First we find the method by its name. This is the method we want to deobfuscate.
            var method = FindMethodByName(funcName);

            // Then we load the encrypted method body from the assembly and decrypt it.
            // The method body is encrypted using the obfuscator's encryption routine.
            var decryptedCode = DecryptCode(
                new byte[] { 18, 120, 171, 223 },
                LoadCodeByHash(GetMethodHash(method.MDToken.Raw))
            );
            // Then we patch the decrypted method body using the obfuscator's patching routine.
            // This routine is responsible for fixing the method body after it has been decrypted.
            var patchedCode = Dumped.FLARE15.flared_67(decryptedCode, (int)method.MDToken.Raw);

            // Finally we replace the method body with the patched method body.
            // To do this we need to create a new CilBody with valid metadata.
            var flags_to_replace = GetMethodFlags(method);

            // The method body is created using the dnlib library.
            CilBody body = MethodBodyReader.CreateCilBody(
                this.inputModule,
                patchedCode,
                patchedCode,
                method.Parameters,
                (ushort)(flags_to_replace),
                method.Body.MaxStack,
                (uint)patchedCode.Length,
                method.Body.LocalVarSigTok,
                new GenericParamContext(),
                this.inputModule.Context);

            if (body.Instructions.Count == 0)
            {
                throw new InvalidOperationException(
                    String.Format("Code generation for method {0} failed!", method.Name));
            }

            // Finally we replace the method body with the new one.
            method.Body = body;
        }

        /// <summary>
        /// Fixes method body by updating the method token in the call instructions.
        /// </summary>
        /// <param name="originalCode"> The original method body. </param>
        /// <param name="m"> The dictionary containing the patch locations and the correct method token. </param>
        /// <returns> The patched method body. </returns>
        private byte[] FixCallTargets(byte[] originalCode, Dictionary<uint, int> m)
        {
            foreach (KeyValuePair<uint, int> keyValuePair in m)
            {
                int value = keyValuePair.Value;
                uint key = keyValuePair.Key;

                originalCode[(int)key] = (byte)value;
                originalCode[(int)(key + 1U)] = (byte)(value >> 8);
                originalCode[(int)(key + 2U)] = (byte)(value >> 16);
                originalCode[(int)(key + 3U)] = (byte)(value >> 24);
            }

            return originalCode;
        }

        /// <summary>
        /// Updates patched .exe sections to add the missing sections.
        /// </summary>
        public void UpdateSections()
        {
            var originalFile = PEFile.FromFile(this.inputFile);
            var patchedFile = PEFile.FromFile(this.outputFile);

            foreach (var section in originalFile.Sections)
            {
                if (section.Name.Contains(".text") || section.Name.Contains(".rsrc") || section.Name.Contains(".reloc"))
                    continue;

                var toAdd = new AsmResolver.PE.File.PESection(section);
                patchedFile.Sections.Add(toAdd);
            }

            patchedFile.Write(this.outputFile);
        }

        /// <summary>
        /// Saves the deobfuscated assembly to the specified file.
        /// </summary>
        public void SaveDeobfuscated()
        {
            if (!succDeobfuscated)
                throw new InvalidOperationException("Deobfuscation was unsuccessful or you didn't call Deobfuscate!");

            // We need to set specific dnlib options. Otherwise the assembly won't be saved at all.
            var options = new ModuleWriterOptions(this.inputModule);
            options.MetadataOptions.Flags |= MetadataFlags.KeepOldMaxStack;
            options.MetadataOptions.Flags |= MetadataFlags.PreserveAll;
            options.Logger = DummyLogger.NoThrowInstance;
            this.inputModule.Write(this.outputFile, options);
        }


        /// <summary>
        /// Finds all proxy functions (flare_XX) which are used to call the obfuscated methods (flared_XX) and collects the information about them.
        /// </summary>
        /// <returns> A list of ObfuscatedCall objects containing the information about the proxy functions. </returns>
        private List<ObfuscatedCall> FindObfuscatedCalls()
        {
            List<ObfuscatedCall> obfuscatedCallsInfos = new List<ObfuscatedCall>();

            // We need to avoid some methods because they are not obfuscated methods.
            // They are used to call the obfuscated methods.
            const string mainDispatcher = "flare_71";
            const string basicDispatcher = "flare_70";
            // We also need to avoid some methods as they are not obfuscated.
            List<string> avoidMethods = new List<string> { mainDispatcher, "flare_74" };

            foreach (var type in this.inputModule.Types)
            {
                foreach (var method in type.Methods)
                {
                    // We skip the methods which are not obfuscated.
                    bool skipMethod = avoidMethods.Any(s => method.FullName.Contains(s));
                    // We only need the proxy functions (flare_XX).
                    if (method.FullName.Contains("flare_") && !skipMethod)
                    {
                        // We need to find all calls performed by the proxy function.
                        // In theory there should be only one call inside each proxy function.
                        // Or, to be precise there are 2 calls, but the second one is always a call to the dispatcher (flare_71 or flare_70).
                        List<MethodDef> outgoingCalls = new List<MethodDef> { };

                        // Iterate through all instructions of the method. And find the call instruction.
                        for (int i = 0; i < method.Body.Instructions.Count; i++)
                        {
                            var instr = method.Body.Instructions[i];
                            if (instr.OpCode == dnlib.DotNet.Emit.OpCodes.Call)
                            {
                                // We found a call instruction. Add it to the list of outgoing calls.
                                outgoingCalls.Add((MethodDef)instr.Operand);

                                // Check if the call is to the main dispatcher (flare_71), which requires some special handling.
                                if (outgoingCalls.Last().FullName.Contains(mainDispatcher))
                                {
                                    // Load instruction which loads the code.
                                    var prevLoad = method.Body.Instructions[i - 1];
                                    // Load instruction which loads the dictionary which contains the patches.
                                    var prevPrevLoad = method.Body.Instructions[i - 2];

                                    // Check if the instruction is correct.
                                    Debug.Assert(prevLoad.OpCode == dnlib.DotNet.Emit.OpCodes.Ldsfld);
                                    // Get the code variable name.
                                    var codeVar = ((FieldDef)prevLoad.Operand).Name;
                                    // Get the actual code variable.
                                    var code = Constants.GetCodeVarByName(codeVar);
                                    Debug.Assert(code != null);

                                    // Get the dictionary which contains the patches.
                                    var dict = new Dictionary<uint, int>();
                                    // flare_68 is a special case. The dictionary is not loaded from a variable. Ignore it.
                                    if (!method.Name.Contains("flare_68"))
                                    {
                                        // Check if the instruction is correct.
                                        Debug.Assert(prevPrevLoad.OpCode == dnlib.DotNet.Emit.OpCodes.Ldsfld);
                                        // Get the dictionary variable name.
                                        var dictVar = ((FieldDef)prevPrevLoad.Operand).Name;
                                        // Get the actual dictionary variable.
                                        dict = Constants.GetDictByName(dictVar);
                                        Debug.Assert(dict != null);
                                    }

                                    // Add the information about the obfuscated call to the list.
                                    obfuscatedCallsInfos.Add(new ObfuscatedCallWithArgs(
                                        outgoingCalls.First(),
                                        method,
                                        outgoingCalls.Last(),
                                        dict,
                                        code));
                                }
                                else if (outgoingCalls.Last().FullName.Contains(basicDispatcher))
                                {
                                    // If the call is to the basic dispatcher (flare_70) we don't need to do anything special.
                                    obfuscatedCallsInfos.Add(new ObfuscatedCallNoArgs(outgoingCalls.First(), method, outgoingCalls.Last()));
                                }
                            }
                        }

                        // We need to check if the proxy function contains the correct number of calls.
                        Debug.Assert(outgoingCalls.Count == 2);
                        // And that we have a call to the dispatcher (flare_71 or flare_70) and a call to the obfuscated method (flared_XX).
                        Debug.Assert(outgoingCalls.First().Name.Contains("flared_"));
                        Debug.Assert(outgoingCalls.Last().Name.Contains("flare_"));
                    }
                }
            }

            return obfuscatedCallsInfos;
        }

        /// <summary>
        /// Patches timeouts in the deobfuscated assembly. Helps to debug resulting assembly.
        /// </summary>
        private void PatchTimeouts()
        {
            // We need to find the constructor of the class which contains the timeouts.
            var constructor = FindMethodByName(".cctor", "FLARE03");
            var instr = constructor.Body.Instructions;

            // Iterate over all instructions in the body and change the values of the timeouts.
            for (int i = 0; i < instr.Count; i++)
            {
                // min_alive_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 2160000)
                    instr[i].Operand = 1000;

                // max_alive_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 2880000)
                    instr[i].Operand = 2000;

                // min_check_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 180000)
                    instr[i].Operand = 1000;

                // max_check_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 270000)
                    instr[i].Operand = 2000;

                // min_retry_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 30000)
                    instr[i].Operand = 1000;

                // max_retry_delay
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 42000)
                    instr[i].Operand = 2000;

                // max_try
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4_7)
                    instr[i] = new Instruction(dnlib.DotNet.Emit.OpCodes.Ldc_I4, 1000);

                // task_timeout
                if (instr[i].OpCode == dnlib.DotNet.Emit.OpCodes.Ldc_I4 && (int)instr[i].Operand == 15000)
                    instr[i].Operand = 3600000;
            }
        }

        /// <summary>
        /// Performs the deobfuscation. After this method is called, the assembly 
        // is fully deobfuscated and can be saved using the SaveDeobfuscated method.
        /// </summary>
        public void Deobfuscate()
        {
            // First of all we want to find all obfuscated (proxy) calls in the assembly.
            List<ObfuscatedCall> obfuscatedCallsInfos = FindObfuscatedCalls();
            Console.WriteLine("Collected {0} obfuscated calls", obfuscatedCallsInfos.Count);

            // Now we want to process each proxy-call and replace it with the original function call.
            foreach (var oci in obfuscatedCallsInfos)
            {
                Console.WriteLine("Processing method: {0} ({1}) -> {2} (Exc: {3})", oci.origin.Name, oci.dispatcher.Name, oci.target.Name, oci.target.Body.HasExceptionHandlers);
                // Get the flags of the original method.
                var flags_to_replace = GetMethodFlags(oci.target);

                // Check if we are dealing with a call to the main dispatcher (flare_71).
                if (oci.dispatcher.Name == "flare_71")
                {
                    // Because the main dispatcher is used, we are dealing with a call to a method with arguments.
                    var ocp = oci as ObfuscatedCallWithArgs;
                    Debug.Assert(ocp != null);

                    // We need to fix the call targets in the method called by the proxy function.
                    byte[] fixedMethodBody = FixCallTargets(ocp.code, ocp.keys);

                    // We need to create a new CilBody for the fixed method.
                    CilBody body = MethodBodyReader.CreateCilBody(
                        this.inputModule,
                        fixedMethodBody,
                        fixedMethodBody,
                        ocp.target.Parameters,
                        (ushort)(flags_to_replace),
                        ocp.target.Body.MaxStack,
                        (uint)fixedMethodBody.Length,
                        ocp.target.Body.LocalVarSigTok,
                        new GenericParamContext(),
                        this.inputModule.Context);

                    if (body.Instructions.Count == 0)
                    {
                        throw new InvalidOperationException(
                            String.Format("Code generation for method {0} failed!", ocp.target.Name));
                    }

                    Console.WriteLine("Successfully generated new code for {0}", ocp.target.Name);

                    // Replace the body of the original method with the new body.
                    ocp.target.Body = body;
                }
            }

            // List of methods to deobfuscate.
            List<string> toPatch = new List<string> {
                "flared_38", "flared_00", "flared_01", "flared_02", "flared_03", "flared_04", "flared_05", "flared_06", "flared_07",
                "flared_08", "flared_09", "flared_10", "flared_11", "flared_12", "flared_13", "flared_14", "flared_15", "flared_16",
                "flared_17", "flared_18", "flared_19", "flared_20", "flared_21", "flared_22", "flared_23", "flared_24", "flared_25",
                "flared_26", "flared_27", "flared_28", "flared_29", "flared_30", "flared_31", "flared_32", "flared_33", "flared_34",
                "flared_36", "flared_37", "flared_39", "flared_40", "flared_41", "flared_42", "flared_43", "flared_44", "flared_45",
                "flared_46", "flared_48", "flared_49", "flared_50", "flared_51", "flared_56", "flared_52", "flared_53", "flared_54",
                "flared_55", "flared_57", "flared_58", "flared_59", "flared_60", "flared_61", "flared_62", "flared_63", "flared_64",
                "flared_65"
            };

            foreach (var methodName in toPatch)
            {
                Console.WriteLine("Processing method: {0}", methodName);
                FixFlared(methodName);
                Console.WriteLine("Successfully generated new code for {0}", methodName);
            }

            PatchTimeouts();
            succDeobfuscated = true;
        }
    }
}
