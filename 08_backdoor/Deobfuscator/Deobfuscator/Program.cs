using System;
using System.Diagnostics;
using System.Reflection.Emit;
using dnlib.DotNet;

namespace Deobfuscator
{
    public class Program
    {
        public const string BASE_PATH = "C:\\Users\\madrat\\Desktop\\FlareOn-22\\08_backdoor\\";

        public static void Main(string[] args)
        {
            string inputFile = BASE_PATH + "FlareOn.Backdoor.exe";
            string outputFile = BASE_PATH + "FlareOn.Backdoor-deobfuscated.exe";

            // Perform deobfuscation
            Console.WriteLine("Starting deobfuscation!");
            var patcher = new DnlibPatcher(inputFile, outputFile);
            patcher.Deobfuscate();
            patcher.SaveDeobfuscated();
            patcher.UpdateSections();
            Console.WriteLine("Deobfuscation completed!");

            // Extract encrypted gif and decrypt it
            Console.WriteLine("Generating RC4 key!");
            var key = KeyExtractor.GenerateRC4Key();
            Console.WriteLine("RC4 key: {0}", BitConverter.ToString(key));
            Console.WriteLine("SH: {0}", Dumped.FLARE14.sh);
            Console.WriteLine("C: {0}", Dumped.FLARE15.c.Count);
            KeyExtractor.ExtractDataAndDecrypt(inputFile, BASE_PATH + "decrypted.bin", key);
            Console.WriteLine("Decryption completed!");

            Console.ReadLine();
        }
    }
}
