using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Runtime.InteropServices;
using System.Diagnostics;
using System.Security.Cryptography;
using System.Collections.ObjectModel;

namespace Deobfuscator
{
    internal class Dumped
    {
        private class FLARE06
        {
            public enum DomT
            {
                // Token: 0x04000025 RID: 37
                A,
                // Token: 0x04000026 RID: 38
                B,
                // Token: 0x04000027 RID: 39
                C,
                // Token: 0x04000028 RID: 40
                D,
                // Token: 0x04000029 RID: 41
                E
            }

            // Token: 0x0200000E RID: 14
            public enum DT
            {
                // Token: 0x0400002B RID: 43
                A,
                // Token: 0x0400002C RID: 44
                B,
                // Token: 0x0400002D RID: 45
                C,
                // Token: 0x0400002E RID: 46
                D
            }

            // Token: 0x0200000F RID: 15
            public enum TT
            {
                // Token: 0x04000030 RID: 48
                A = 70,
                // Token: 0x04000031 RID: 49
                B,
                // Token: 0x04000032 RID: 50
                C = 43,
                // Token: 0x04000033 RID: 51
                D = 95,
                // Token: 0x04000034 RID: 52
                E
            }

            // Token: 0x02000010 RID: 16
            public enum SR
            {
                // Token: 0x04000036 RID: 54
                A,
                // Token: 0x04000037 RID: 55
                B,
                // Token: 0x04000038 RID: 56
                C,
                // Token: 0x04000039 RID: 57
                D,
                // Token: 0x0400003A RID: 58
                E
            }

            // Token: 0x02000011 RID: 17
            public enum OT
            {
                // Token: 0x0400003C RID: 60
                A,
                // Token: 0x0400003D RID: 61
                B,
                // Token: 0x0400003E RID: 62
                C,
                // Token: 0x0400003F RID: 63
                D,
                // Token: 0x04000040 RID: 64
                E,
                // Token: 0x04000041 RID: 65
                F,
                // Token: 0x04000042 RID: 66
                G,
                // Token: 0x04000043 RID: 67
                H,
                // Token: 0x04000044 RID: 68
                I
            }
        }

        public class FLARE02
        {
            // Token: 0x06000006 RID: 6 RVA: 0x0000236C File Offset: 0x0000116C
            public static string flare_03(string c)
            {
                Debug.Assert(false);
                return "";
                // return FLARE02.flare_05("cmd", "/c " + c + " && exit");
            }

            // Token: 0x06000008 RID: 8 RVA: 0x000023DC File Offset: 0x000011DC
            public static string flare_04(string c)
            {
                return "powershell -exec bypass -enc \"" + c + "\"";
            }
        }

        public class FLARE09
        {
            public static void flare_37(string f)
            {
                FileStream fileStream = new FileStream(f, FileMode.Open, FileAccess.Read);
                BinaryReader binaryReader = new BinaryReader(fileStream);
                FLARE09.dosHeader = FLARE09.FromBinaryReader<FLARE09.IMAGE_DOS_HEADER>(binaryReader);
                fileStream.Seek((long)((ulong)FLARE09.dosHeader.e_lfanew), SeekOrigin.Begin);
                uint num = binaryReader.ReadUInt32();
                FLARE09.fileHeader = FLARE09.FromBinaryReader<FLARE09.IMAGE_FILE_HEADER>(binaryReader);
                FLARE09.optionalHeader32 = FLARE09.FromBinaryReader<FLARE09.IMAGE_OPTIONAL_HEADER32>(binaryReader);
                FLARE09.imageSectionHeaders = new FLARE09.IMAGE_SECTION_HEADER[(int)FLARE09.fileHeader.NumberOfSections];
                for (int i = 0; i < FLARE09.imageSectionHeaders.Length; i++)
                {
                    FLARE09.imageSectionHeaders[i] = FLARE09.FromBinaryReader<FLARE09.IMAGE_SECTION_HEADER>(binaryReader);
                }
            }

            public static T FromBinaryReader<T>(BinaryReader reader)
            {
                byte[] array = reader.ReadBytes(Marshal.SizeOf(typeof(T)));
                GCHandle gchandle = GCHandle.Alloc(array, GCHandleType.Pinned);
                T t = (T)((object)Marshal.PtrToStructure(gchandle.AddrOfPinnedObject(), typeof(T)));
                gchandle.Free();
                return t;
            }

            // Token: 0x17000001 RID: 1
            // (get) Token: 0x0600005F RID: 95 RVA: 0x00003A68 File Offset: 0x00002868
            public bool Is32BitHeader
            {
                get
                {
                    ushort num = 256;
                    return (num & this.FileHeader.Characteristics) == num;
                }
            }

            // Token: 0x17000002 RID: 2
            // (get) Token: 0x06000060 RID: 96 RVA: 0x00003A90 File Offset: 0x00002890
            public FLARE09.IMAGE_FILE_HEADER FileHeader
            {
                get
                {
                    return FLARE09.fileHeader;
                }
            }

            // Token: 0x17000003 RID: 3
            // (get) Token: 0x06000061 RID: 97 RVA: 0x00003AA8 File Offset: 0x000028A8
            public FLARE09.IMAGE_OPTIONAL_HEADER32 OptionalHeader32
            {
                get
                {
                    return FLARE09.optionalHeader32;
                }
            }

            // Token: 0x17000004 RID: 4
            // (get) Token: 0x06000062 RID: 98 RVA: 0x00003AC0 File Offset: 0x000028C0
            public FLARE09.IMAGE_OPTIONAL_HEADER64 OptionalHeader64
            {
                get
                {
                    return FLARE09.optionalHeader64;
                }
            }

            // Token: 0x17000005 RID: 5
            // (get) Token: 0x06000063 RID: 99 RVA: 0x00003AD8 File Offset: 0x000028D8
            public FLARE09.IMAGE_SECTION_HEADER[] ImageSectionHeaders
            {
                get
                {
                    return FLARE09.imageSectionHeaders;
                }
            }

            // Token: 0x17000006 RID: 6
            // (get) Token: 0x06000064 RID: 100 RVA: 0x00003AF0 File Offset: 0x000028F0
            public DateTime TimeStamp
            {
                get
                {
                    DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0);
                    dateTime = dateTime.AddSeconds(FLARE09.fileHeader.TimeDateStamp);
                    dateTime += TimeZone.CurrentTimeZone.GetUtcOffset(dateTime);
                    return dateTime;
                }
            }

            // Token: 0x04000057 RID: 87
            public static FLARE09.IMAGE_DOS_HEADER dosHeader;

            // Token: 0x04000058 RID: 88
            public static FLARE09.IMAGE_FILE_HEADER fileHeader;

            // Token: 0x04000059 RID: 89
            public static FLARE09.IMAGE_OPTIONAL_HEADER32 optionalHeader32;

            // Token: 0x0400005A RID: 90
            public static FLARE09.IMAGE_OPTIONAL_HEADER64 optionalHeader64;

            // Token: 0x0400005B RID: 91
            public static FLARE09.IMAGE_SECTION_HEADER[] imageSectionHeaders;

            // Token: 0x02000015 RID: 21
            public struct IMAGE_DOS_HEADER
            {
                // Token: 0x0400005C RID: 92
                public ushort e_magic;

                // Token: 0x0400005D RID: 93
                public ushort e_cblp;

                // Token: 0x0400005E RID: 94
                public ushort e_cp;

                // Token: 0x0400005F RID: 95
                public ushort e_crlc;

                // Token: 0x04000060 RID: 96
                public ushort e_cparhdr;

                // Token: 0x04000061 RID: 97
                public ushort e_minalloc;

                // Token: 0x04000062 RID: 98
                public ushort e_maxalloc;

                // Token: 0x04000063 RID: 99
                public ushort e_ss;

                // Token: 0x04000064 RID: 100
                public ushort e_sp;

                // Token: 0x04000065 RID: 101
                public ushort e_csum;

                // Token: 0x04000066 RID: 102
                public ushort e_ip;

                // Token: 0x04000067 RID: 103
                public ushort e_cs;

                // Token: 0x04000068 RID: 104
                public ushort e_lfarlc;

                // Token: 0x04000069 RID: 105
                public ushort e_ovno;

                // Token: 0x0400006A RID: 106
                public ushort e_res_0;

                // Token: 0x0400006B RID: 107
                public ushort e_res_1;

                // Token: 0x0400006C RID: 108
                public ushort e_res_2;

                // Token: 0x0400006D RID: 109
                public ushort e_res_3;

                // Token: 0x0400006E RID: 110
                public ushort e_oemid;

                // Token: 0x0400006F RID: 111
                public ushort e_oeminfo;

                // Token: 0x04000070 RID: 112
                public ushort e_res2_0;

                // Token: 0x04000071 RID: 113
                public ushort e_res2_1;

                // Token: 0x04000072 RID: 114
                public ushort e_res2_2;

                // Token: 0x04000073 RID: 115
                public ushort e_res2_3;

                // Token: 0x04000074 RID: 116
                public ushort e_res2_4;

                // Token: 0x04000075 RID: 117
                public ushort e_res2_5;

                // Token: 0x04000076 RID: 118
                public ushort e_res2_6;

                // Token: 0x04000077 RID: 119
                public ushort e_res2_7;

                // Token: 0x04000078 RID: 120
                public ushort e_res2_8;

                // Token: 0x04000079 RID: 121
                public ushort e_res2_9;

                // Token: 0x0400007A RID: 122
                public uint e_lfanew;
            }

            // Token: 0x02000016 RID: 22
            public struct IMAGE_DATA_DIRECTORY
            {
                // Token: 0x0400007B RID: 123
                public uint VirtualAddress;

                // Token: 0x0400007C RID: 124
                public uint Size;
            }

            // Token: 0x02000017 RID: 23
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            public struct IMAGE_OPTIONAL_HEADER32
            {
                // Token: 0x0400007D RID: 125
                public ushort Magic;

                // Token: 0x0400007E RID: 126
                public byte MajorLinkerVersion;

                // Token: 0x0400007F RID: 127
                public byte MinorLinkerVersion;

                // Token: 0x04000080 RID: 128
                public uint SizeOfCode;

                // Token: 0x04000081 RID: 129
                public uint SizeOfInitializedData;

                // Token: 0x04000082 RID: 130
                public uint SizeOfUninitializedData;

                // Token: 0x04000083 RID: 131
                public uint AddressOfEntryPoint;

                // Token: 0x04000084 RID: 132
                public uint BaseOfCode;

                // Token: 0x04000085 RID: 133
                public uint BaseOfData;

                // Token: 0x04000086 RID: 134
                public uint ImageBase;

                // Token: 0x04000087 RID: 135
                public uint SectionAlignment;

                // Token: 0x04000088 RID: 136
                public uint FileAlignment;

                // Token: 0x04000089 RID: 137
                public ushort MajorOperatingSystemVersion;

                // Token: 0x0400008A RID: 138
                public ushort MinorOperatingSystemVersion;

                // Token: 0x0400008B RID: 139
                public ushort MajorImageVersion;

                // Token: 0x0400008C RID: 140
                public ushort MinorImageVersion;

                // Token: 0x0400008D RID: 141
                public ushort MajorSubsystemVersion;

                // Token: 0x0400008E RID: 142
                public ushort MinorSubsystemVersion;

                // Token: 0x0400008F RID: 143
                public uint Win32VersionValue;

                // Token: 0x04000090 RID: 144
                public uint SizeOfImage;

                // Token: 0x04000091 RID: 145
                public uint SizeOfHeaders;

                // Token: 0x04000092 RID: 146
                public uint CheckSum;

                // Token: 0x04000093 RID: 147
                public ushort Subsystem;

                // Token: 0x04000094 RID: 148
                public ushort DllCharacteristics;

                // Token: 0x04000095 RID: 149
                public uint SizeOfStackReserve;

                // Token: 0x04000096 RID: 150
                public uint SizeOfStackCommit;

                // Token: 0x04000097 RID: 151
                public uint SizeOfHeapReserve;

                // Token: 0x04000098 RID: 152
                public uint SizeOfHeapCommit;

                // Token: 0x04000099 RID: 153
                public uint LoaderFlags;

                // Token: 0x0400009A RID: 154
                public uint NumberOfRvaAndSizes;

                // Token: 0x0400009B RID: 155
                public FLARE09.IMAGE_DATA_DIRECTORY ExportTable;

                // Token: 0x0400009C RID: 156
                public FLARE09.IMAGE_DATA_DIRECTORY ImportTable;

                // Token: 0x0400009D RID: 157
                public FLARE09.IMAGE_DATA_DIRECTORY ResourceTable;

                // Token: 0x0400009E RID: 158
                public FLARE09.IMAGE_DATA_DIRECTORY ExceptionTable;

                // Token: 0x0400009F RID: 159
                public FLARE09.IMAGE_DATA_DIRECTORY CertificateTable;

                // Token: 0x040000A0 RID: 160
                public FLARE09.IMAGE_DATA_DIRECTORY BaseRelocationTable;

                // Token: 0x040000A1 RID: 161
                public FLARE09.IMAGE_DATA_DIRECTORY Debug;

                // Token: 0x040000A2 RID: 162
                public FLARE09.IMAGE_DATA_DIRECTORY Architecture;

                // Token: 0x040000A3 RID: 163
                public FLARE09.IMAGE_DATA_DIRECTORY GlobalPtr;

                // Token: 0x040000A4 RID: 164
                public FLARE09.IMAGE_DATA_DIRECTORY TLSTable;

                // Token: 0x040000A5 RID: 165
                public FLARE09.IMAGE_DATA_DIRECTORY LoadConfigTable;

                // Token: 0x040000A6 RID: 166
                public FLARE09.IMAGE_DATA_DIRECTORY BoundImport;

                // Token: 0x040000A7 RID: 167
                public FLARE09.IMAGE_DATA_DIRECTORY IAT;

                // Token: 0x040000A8 RID: 168
                public FLARE09.IMAGE_DATA_DIRECTORY DelayImportDescriptor;

                // Token: 0x040000A9 RID: 169
                public FLARE09.IMAGE_DATA_DIRECTORY CLRRuntimeHeader;

                // Token: 0x040000AA RID: 170
                public FLARE09.IMAGE_DATA_DIRECTORY Reserved;
            }

            // Token: 0x02000018 RID: 24
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            public struct IMAGE_OPTIONAL_HEADER64
            {
                // Token: 0x040000AB RID: 171
                public ushort Magic;

                // Token: 0x040000AC RID: 172
                public byte MajorLinkerVersion;

                // Token: 0x040000AD RID: 173
                public byte MinorLinkerVersion;

                // Token: 0x040000AE RID: 174
                public uint SizeOfCode;

                // Token: 0x040000AF RID: 175
                public uint SizeOfInitializedData;

                // Token: 0x040000B0 RID: 176
                public uint SizeOfUninitializedData;

                // Token: 0x040000B1 RID: 177
                public uint AddressOfEntryPoint;

                // Token: 0x040000B2 RID: 178
                public uint BaseOfCode;

                // Token: 0x040000B3 RID: 179
                public ulong ImageBase;

                // Token: 0x040000B4 RID: 180
                public uint SectionAlignment;

                // Token: 0x040000B5 RID: 181
                public uint FileAlignment;

                // Token: 0x040000B6 RID: 182
                public ushort MajorOperatingSystemVersion;

                // Token: 0x040000B7 RID: 183
                public ushort MinorOperatingSystemVersion;

                // Token: 0x040000B8 RID: 184
                public ushort MajorImageVersion;

                // Token: 0x040000B9 RID: 185
                public ushort MinorImageVersion;

                // Token: 0x040000BA RID: 186
                public ushort MajorSubsystemVersion;

                // Token: 0x040000BB RID: 187
                public ushort MinorSubsystemVersion;

                // Token: 0x040000BC RID: 188
                public uint Win32VersionValue;

                // Token: 0x040000BD RID: 189
                public uint SizeOfImage;

                // Token: 0x040000BE RID: 190
                public uint SizeOfHeaders;

                // Token: 0x040000BF RID: 191
                public uint CheckSum;

                // Token: 0x040000C0 RID: 192
                public ushort Subsystem;

                // Token: 0x040000C1 RID: 193
                public ushort DllCharacteristics;

                // Token: 0x040000C2 RID: 194
                public ulong SizeOfStackReserve;

                // Token: 0x040000C3 RID: 195
                public ulong SizeOfStackCommit;

                // Token: 0x040000C4 RID: 196
                public ulong SizeOfHeapReserve;

                // Token: 0x040000C5 RID: 197
                public ulong SizeOfHeapCommit;

                // Token: 0x040000C6 RID: 198
                public uint LoaderFlags;

                // Token: 0x040000C7 RID: 199
                public uint NumberOfRvaAndSizes;

                // Token: 0x040000C8 RID: 200
                public FLARE09.IMAGE_DATA_DIRECTORY ExportTable;

                // Token: 0x040000C9 RID: 201
                public FLARE09.IMAGE_DATA_DIRECTORY ImportTable;

                // Token: 0x040000CA RID: 202
                public FLARE09.IMAGE_DATA_DIRECTORY ResourceTable;

                // Token: 0x040000CB RID: 203
                public FLARE09.IMAGE_DATA_DIRECTORY ExceptionTable;

                // Token: 0x040000CC RID: 204
                public FLARE09.IMAGE_DATA_DIRECTORY CertificateTable;

                // Token: 0x040000CD RID: 205
                public FLARE09.IMAGE_DATA_DIRECTORY BaseRelocationTable;

                // Token: 0x040000CE RID: 206
                public FLARE09.IMAGE_DATA_DIRECTORY Debug;

                // Token: 0x040000CF RID: 207
                public FLARE09.IMAGE_DATA_DIRECTORY Architecture;

                // Token: 0x040000D0 RID: 208
                public FLARE09.IMAGE_DATA_DIRECTORY GlobalPtr;

                // Token: 0x040000D1 RID: 209
                public FLARE09.IMAGE_DATA_DIRECTORY TLSTable;

                // Token: 0x040000D2 RID: 210
                public FLARE09.IMAGE_DATA_DIRECTORY LoadConfigTable;

                // Token: 0x040000D3 RID: 211
                public FLARE09.IMAGE_DATA_DIRECTORY BoundImport;

                // Token: 0x040000D4 RID: 212
                public FLARE09.IMAGE_DATA_DIRECTORY IAT;

                // Token: 0x040000D5 RID: 213
                public FLARE09.IMAGE_DATA_DIRECTORY DelayImportDescriptor;

                // Token: 0x040000D6 RID: 214
                public FLARE09.IMAGE_DATA_DIRECTORY CLRRuntimeHeader;

                // Token: 0x040000D7 RID: 215
                public FLARE09.IMAGE_DATA_DIRECTORY Reserved;
            }

            // Token: 0x02000019 RID: 25
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            public struct IMAGE_FILE_HEADER
            {
                // Token: 0x040000D8 RID: 216
                public ushort Machine;

                // Token: 0x040000D9 RID: 217
                public ushort NumberOfSections;

                // Token: 0x040000DA RID: 218
                public uint TimeDateStamp;

                // Token: 0x040000DB RID: 219
                public uint PointerToSymbolTable;

                // Token: 0x040000DC RID: 220
                public uint NumberOfSymbols;

                // Token: 0x040000DD RID: 221
                public ushort SizeOfOptionalHeader;

                // Token: 0x040000DE RID: 222
                public ushort Characteristics;
            }

            // Token: 0x0200001A RID: 26
            [StructLayout(LayoutKind.Explicit)]
            public struct IMAGE_SECTION_HEADER
            {
                // Token: 0x17000007 RID: 7
                // (get) Token: 0x06000066 RID: 102 RVA: 0x00003B3C File Offset: 0x0000293C
                public string Section
                {
                    get
                    {
                        return new string(this.Name);
                    }
                }

                // Token: 0x040000DF RID: 223
                [FieldOffset(0)]
                [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
                public char[] Name;

                // Token: 0x040000E0 RID: 224
                [FieldOffset(8)]
                public uint VirtualSize;

                // Token: 0x040000E1 RID: 225
                [FieldOffset(12)]
                public uint VirtualAddress;

                // Token: 0x040000E2 RID: 226
                [FieldOffset(16)]
                public uint SizeOfRawData;

                // Token: 0x040000E3 RID: 227
                [FieldOffset(20)]
                public uint PointerToRawData;

                // Token: 0x040000E4 RID: 228
                [FieldOffset(24)]
                public uint PointerToRelocations;

                // Token: 0x040000E5 RID: 229
                [FieldOffset(28)]
                public uint PointerToLinenumbers;

                // Token: 0x040000E6 RID: 230
                [FieldOffset(32)]
                public ushort NumberOfRelocations;

                // Token: 0x040000E7 RID: 231
                [FieldOffset(34)]
                public ushort NumberOfLinenumbers;

                // Token: 0x040000E8 RID: 232
                [FieldOffset(36)]
                public FLARE09.DataSectionFlags Characteristics;
            }

            // Token: 0x0200001B RID: 27
            [Flags]
            public enum DataSectionFlags : uint
            {
                // Token: 0x040000EA RID: 234
                TypeReg = 0U,
                // Token: 0x040000EB RID: 235
                TypeDsect = 1U,
                // Token: 0x040000EC RID: 236
                TypeNoLoad = 2U,
                // Token: 0x040000ED RID: 237
                TypeGroup = 4U,
                // Token: 0x040000EE RID: 238
                TypeNoPadded = 8U,
                // Token: 0x040000EF RID: 239
                TypeCopy = 16U,
                // Token: 0x040000F0 RID: 240
                ContentCode = 32U,
                // Token: 0x040000F1 RID: 241
                ContentInitializedData = 64U,
                // Token: 0x040000F2 RID: 242
                ContentUninitializedData = 128U,
                // Token: 0x040000F3 RID: 243
                LinkOther = 256U,
                // Token: 0x040000F4 RID: 244
                LinkInfo = 512U,
                // Token: 0x040000F5 RID: 245
                TypeOver = 1024U,
                // Token: 0x040000F6 RID: 246
                LinkRemove = 2048U,
                // Token: 0x040000F7 RID: 247
                LinkComDat = 4096U,
                // Token: 0x040000F8 RID: 248
                NoDeferSpecExceptions = 16384U,
                // Token: 0x040000F9 RID: 249
                RelativeGP = 32768U,
                // Token: 0x040000FA RID: 250
                MemPurgeable = 131072U,
                // Token: 0x040000FB RID: 251
                Memory16Bit = 131072U,
                // Token: 0x040000FC RID: 252
                MemoryLocked = 262144U,
                // Token: 0x040000FD RID: 253
                MemoryPreload = 524288U,
                // Token: 0x040000FE RID: 254
                Align1Bytes = 1048576U,
                // Token: 0x040000FF RID: 255
                Align2Bytes = 2097152U,
                // Token: 0x04000100 RID: 256
                Align4Bytes = 3145728U,
                // Token: 0x04000101 RID: 257
                Align8Bytes = 4194304U,
                // Token: 0x04000102 RID: 258
                Align16Bytes = 5242880U,
                // Token: 0x04000103 RID: 259
                Align32Bytes = 6291456U,
                // Token: 0x04000104 RID: 260
                Align64Bytes = 7340032U,
                // Token: 0x04000105 RID: 261
                Align128Bytes = 8388608U,
                // Token: 0x04000106 RID: 262
                Align256Bytes = 9437184U,
                // Token: 0x04000107 RID: 263
                Align512Bytes = 10485760U,
                // Token: 0x04000108 RID: 264
                Align1024Bytes = 11534336U,
                // Token: 0x04000109 RID: 265
                Align2048Bytes = 12582912U,
                // Token: 0x0400010A RID: 266
                Align4096Bytes = 13631488U,
                // Token: 0x0400010B RID: 267
                Align8192Bytes = 14680064U,
                // Token: 0x0400010C RID: 268
                LinkExtendedRelocationOverflow = 16777216U,
                // Token: 0x0400010D RID: 269
                MemoryDiscardable = 33554432U,
                // Token: 0x0400010E RID: 270
                MemoryNotCached = 67108864U,
                // Token: 0x0400010F RID: 271
                MemoryNotPaged = 134217728U,
                // Token: 0x04000110 RID: 272
                MemoryShared = 268435456U,
                // Token: 0x04000111 RID: 273
                MemoryExecute = 536870912U,
                // Token: 0x04000112 RID: 274
                MemoryRead = 1073741824U,
                // Token: 0x04000113 RID: 275
                MemoryWrite = 2147483648U
            }

            // Token: 0x06000058 RID: 88 RVA: 0x00003840 File Offset: 0x00002640
            public static void flared_35(string f)
            {
                FileStream fileStream = new FileStream(f, FileMode.Open, FileAccess.Read);
                BinaryReader binaryReader = new BinaryReader(fileStream);
                FLARE09.dosHeader = FLARE09.FromBinaryReader<FLARE09.IMAGE_DOS_HEADER>(binaryReader);
                fileStream.Seek((long)((ulong)FLARE09.dosHeader.e_lfanew), SeekOrigin.Begin);
                uint num = binaryReader.ReadUInt32();
                FLARE09.fileHeader = FLARE09.FromBinaryReader<FLARE09.IMAGE_FILE_HEADER>(binaryReader);
                FLARE09.optionalHeader32 = FLARE09.FromBinaryReader<FLARE09.IMAGE_OPTIONAL_HEADER32>(binaryReader);
                FLARE09.imageSectionHeaders = new FLARE09.IMAGE_SECTION_HEADER[(int)FLARE09.fileHeader.NumberOfSections];
                for (int i = 0; i < FLARE09.imageSectionHeaders.Length; i++)
                {
                    FLARE09.imageSectionHeaders[i] = FLARE09.FromBinaryReader<FLARE09.IMAGE_SECTION_HEADER>(binaryReader);
                }
            }
        }

        public class FLARE14
        {
            // Token: 0x04000127 RID: 295
            public static IncrementalHash h = IncrementalHash.CreateHash(HashAlgorithmName.SHA256);

            // Token: 0x04000128 RID: 296
            public static string sh = "";

            // Token: 0x04000129 RID: 297
            public static bool _bool = true;

            // Token: 0x0400012A RID: 298
            public static List<byte[]> ListData;
            public static byte[] flare_69(string h, string path)
            {
                FLARE09 flare = new FLARE09();
                FLARE09.flare_37(path);
                byte[] array = null;
                FileStream fileStream = new FileStream(path, FileMode.Open, FileAccess.Read);
                foreach (FLARE09.IMAGE_SECTION_HEADER image_SECTION_HEADER in flare.ImageSectionHeaders)
                {
                    bool flag = h.StartsWith(new string(image_SECTION_HEADER.Name));
                    if (flag)
                    {
                        array = new byte[image_SECTION_HEADER.VirtualSize];
                        fileStream.Seek((long)((ulong)image_SECTION_HEADER.PointerToRawData), SeekOrigin.Begin);
                        fileStream.Read(array, 0, (int)image_SECTION_HEADER.VirtualSize);
                        break;
                    }
                }
                return array;
            }

            public static uint flared_51(string s)
            {
                uint num = 0U;
                bool flag = s != null;
                if (flag)
                {
                    num = 2166136261U;
                    for (int i = 0; i < s.Length; i++)
                    {
                        num = ((uint)s[i] ^ num) * 16777619U;
                    }
                }
                return num;
            }

            public static string flare_54(string s)
            {
                char[] array = s.ToCharArray();
                Array.Reverse(array);
                return new string(array);
            }

            public static void flare_56(int i, string s)
            {
                bool flag = FLARE15.c.Count != 0 && FLARE15.c[0] == (i ^ 248);
                if (flag)
                {
                    FLARE14.sh += s;
                    FLARE15.c.Remove(i ^ 248);
                }
                else
                {
                    Debug.Assert(false);
                }
            }

            public static string flare_57()
            {
                //return "System.String flare_56()Void flared_38(System.String[])";
                //return "System.String flare_56()Void flare_38(System.String[])";
                //return "System.String flared_56()Void flared_38(System.String[])";
                //return "System.String flared_56()Void flare_38(System.String[])";
                //return "System.String flare_52()Void flared_38(System.String[])";
                //return "System.String flare_52()Void flare_38(System.String[])";

                // return "System.String flare_57()Void <_DoTask>b__0()";
                // return "System.String flared_57()Void <_DoTask>b__0()";
                // return "System.String flare_56()Void <_DoTask>b__0()";
                // return "System.String flared_56()Void <_DoTask>b__0()";
                // return "System.String flare_52()Void <_DoTask>b__0()";
                // return "System.String flared_52()Void <_DoTask>b__0()";

                // return "System.Object flared_67(Byte[], Int32, System.Object[])System.Object flare_67(Byte[], Int32, System.Object[])";
                //return "System.String ()System.Object InvokeMethod(System.Object, System.Object[], System.Signature, Boolean)";
                return "System.Object InvokeMethod(System.Object, System.Object[], System.Signature, Boolean)System.Object Invoke(System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo)";
            }
        }

        public class FLARE12
        {
            // Token: 0x0600007F RID: 127 RVA: 0x00004164 File Offset: 0x00002F64
            public static byte[] flared_47(byte[] p, byte[] d)
            {
                int[] array = new int[256];
                int[] array2 = new int[256];
                byte[] array3 = new byte[d.Length];
                int i;
                for (i = 0; i < 256; i++)
                {
                    array[i] = (int)p[i % p.Length];
                    array2[i] = i;
                }
                int num;
                for (i = (num = 0); i < 256; i++)
                {
                    num = (num + array2[i] + array[i]) % 256;
                    int num2 = array2[i];
                    array2[i] = array2[num];
                    array2[num] = num2;
                }
                int num3;
                num = (num3 = (i = 0));
                while (i < d.Length)
                {
                    num3++;
                    num3 %= 256;
                    num += array2[num3];
                    num %= 256;
                    int num2 = array2[num3];
                    array2[num3] = array2[num];
                    array2[num] = num2;
                    int num4 = array2[(array2[num3] + array2[num]) % 256];
                    array3[i] = (byte)((int)d[i] ^ num4);
                    i++;
                }
                return array3;
            }
        }

        public class FLARE15
        {
            public static ObservableCollection<int> c = new ObservableCollection<int>
            {
                250, 242, 240, 235, 243, 249, 247, 245, 238, 232,
                253, 244, 237, 251, 234, 233, 236, 246, 241, 255,
                252
            };

            public static byte[] flare_69(string hash, string path)
            {
                FLARE09 flare = new FLARE09();
                FLARE09.flared_35(path);
                byte[] array = null;
                FileStream fileStream = new FileStream(path, FileMode.Open, FileAccess.Read);
                foreach (FLARE09.IMAGE_SECTION_HEADER image_SECTION_HEADER in flare.ImageSectionHeaders)
                {
                    bool flag = hash.StartsWith(new string(image_SECTION_HEADER.Name));
                    if (flag)
                    {
                        array = new byte[image_SECTION_HEADER.VirtualSize];
                        fileStream.Seek((long)((ulong)image_SECTION_HEADER.PointerToRawData), SeekOrigin.Begin);
                        fileStream.Read(array, 0, (int)image_SECTION_HEADER.VirtualSize);
                        break;
                    }
                }
                return array;
            }

            public static int flare_68(byte[] b, int o)
            {
                int num = (int)b[o + 3] * 16777216;
                num += (int)b[o + 2] * 65536;
                num += (int)b[o + 1] * 256;
                return num + (int)b[o];
            }

            public static byte[] flared_67(byte[] b, int tk)
            {
                Dictionary<uint, FLARE06.OT> dictionary = new Dictionary<uint, FLARE06.OT>
            {
                {
                    88U,
                    FLARE06.OT.A
                },
                {
                    214U,
                    FLARE06.OT.A
                },
                {
                    215U,
                    FLARE06.OT.A
                },
                {
                    95U,
                    FLARE06.OT.A
                },
                {
                    65024U,
                    FLARE06.OT.A
                },
                {
                    59U,
                    FLARE06.OT.D
                },
                {
                    46U,
                    FLARE06.OT.C
                },
                {
                    60U,
                    FLARE06.OT.D
                },
                {
                    47U,
                    FLARE06.OT.C
                },
                {
                    65U,
                    FLARE06.OT.D
                },
                {
                    52U,
                    FLARE06.OT.C
                },
                {
                    61U,
                    FLARE06.OT.D
                },
                {
                    48U,
                    FLARE06.OT.C
                },
                {
                    66U,
                    FLARE06.OT.D
                },
                {
                    53U,
                    FLARE06.OT.C
                },
                {
                    62U,
                    FLARE06.OT.D
                },
                {
                    49U,
                    FLARE06.OT.C
                },
                {
                    67U,
                    FLARE06.OT.D
                },
                {
                    54U,
                    FLARE06.OT.C
                },
                {
                    63U,
                    FLARE06.OT.D
                },
                {
                    50U,
                    FLARE06.OT.C
                },
                {
                    68U,
                    FLARE06.OT.D
                },
                {
                    55U,
                    FLARE06.OT.C
                },
                {
                    64U,
                    FLARE06.OT.D
                },
                {
                    51U,
                    FLARE06.OT.C
                },
                {
                    140U,
                    FLARE06.OT.B
                },
                {
                    56U,
                    FLARE06.OT.D
                },
                {
                    43U,
                    FLARE06.OT.C
                },
                {
                    1U,
                    FLARE06.OT.A
                },
                {
                    57U,
                    FLARE06.OT.D
                },
                {
                    44U,
                    FLARE06.OT.C
                },
                {
                    58U,
                    FLARE06.OT.D
                },
                {
                    45U,
                    FLARE06.OT.C
                },
                {
                    40U,
                    FLARE06.OT.B
                },
                {
                    41U,
                    FLARE06.OT.B
                },
                {
                    111U,
                    FLARE06.OT.B
                },
                {
                    116U,
                    FLARE06.OT.B
                },
                {
                    65025U,
                    FLARE06.OT.A
                },
                {
                    65026U,
                    FLARE06.OT.A
                },
                {
                    65027U,
                    FLARE06.OT.A
                },
                {
                    195U,
                    FLARE06.OT.A
                },
                {
                    65028U,
                    FLARE06.OT.A
                },
                {
                    65029U,
                    FLARE06.OT.A
                },
                {
                    65046U,
                    FLARE06.OT.B
                },
                {
                    211U,
                    FLARE06.OT.A
                },
                {
                    103U,
                    FLARE06.OT.A
                },
                {
                    104U,
                    FLARE06.OT.A
                },
                {
                    105U,
                    FLARE06.OT.A
                },
                {
                    106U,
                    FLARE06.OT.A
                },
                {
                    212U,
                    FLARE06.OT.A
                },
                {
                    138U,
                    FLARE06.OT.A
                },
                {
                    179U,
                    FLARE06.OT.A
                },
                {
                    130U,
                    FLARE06.OT.A
                },
                {
                    181U,
                    FLARE06.OT.A
                },
                {
                    131U,
                    FLARE06.OT.A
                },
                {
                    183U,
                    FLARE06.OT.A
                },
                {
                    132U,
                    FLARE06.OT.A
                },
                {
                    185U,
                    FLARE06.OT.A
                },
                {
                    133U,
                    FLARE06.OT.A
                },
                {
                    213U,
                    FLARE06.OT.A
                },
                {
                    139U,
                    FLARE06.OT.A
                },
                {
                    180U,
                    FLARE06.OT.A
                },
                {
                    134U,
                    FLARE06.OT.A
                },
                {
                    182U,
                    FLARE06.OT.A
                },
                {
                    135U,
                    FLARE06.OT.A
                },
                {
                    184U,
                    FLARE06.OT.A
                },
                {
                    136U,
                    FLARE06.OT.A
                },
                {
                    186U,
                    FLARE06.OT.A
                },
                {
                    137U,
                    FLARE06.OT.A
                },
                {
                    118U,
                    FLARE06.OT.A
                },
                {
                    107U,
                    FLARE06.OT.A
                },
                {
                    108U,
                    FLARE06.OT.A
                },
                {
                    224U,
                    FLARE06.OT.A
                },
                {
                    210U,
                    FLARE06.OT.A
                },
                {
                    209U,
                    FLARE06.OT.A
                },
                {
                    109U,
                    FLARE06.OT.A
                },
                {
                    110U,
                    FLARE06.OT.A
                },
                {
                    65047U,
                    FLARE06.OT.A
                },
                {
                    112U,
                    FLARE06.OT.B
                },
                {
                    91U,
                    FLARE06.OT.A
                },
                {
                    92U,
                    FLARE06.OT.A
                },
                {
                    37U,
                    FLARE06.OT.A
                },
                {
                    65041U,
                    FLARE06.OT.A
                },
                {
                    220U,
                    FLARE06.OT.A
                },
                {
                    65048U,
                    FLARE06.OT.A
                },
                {
                    65045U,
                    FLARE06.OT.B
                },
                {
                    117U,
                    FLARE06.OT.B
                },
                {
                    39U,
                    FLARE06.OT.B
                },
                {
                    65033U,
                    FLARE06.OT.F
                },
                {
                    2U,
                    FLARE06.OT.A
                },
                {
                    3U,
                    FLARE06.OT.A
                },
                {
                    4U,
                    FLARE06.OT.A
                },
                {
                    5U,
                    FLARE06.OT.A
                },
                {
                    14U,
                    FLARE06.OT.E
                },
                {
                    65034U,
                    FLARE06.OT.F
                },
                {
                    15U,
                    FLARE06.OT.E
                },
                {
                    32U,
                    FLARE06.OT.G
                },
                {
                    22U,
                    FLARE06.OT.A
                },
                {
                    23U,
                    FLARE06.OT.A
                },
                {
                    24U,
                    FLARE06.OT.A
                },
                {
                    25U,
                    FLARE06.OT.A
                },
                {
                    26U,
                    FLARE06.OT.A
                },
                {
                    27U,
                    FLARE06.OT.A
                },
                {
                    28U,
                    FLARE06.OT.A
                },
                {
                    29U,
                    FLARE06.OT.A
                },
                {
                    30U,
                    FLARE06.OT.A
                },
                {
                    21U,
                    FLARE06.OT.A
                },
                {
                    31U,
                    FLARE06.OT.E
                },
                {
                    33U,
                    FLARE06.OT.H
                },
                {
                    34U,
                    FLARE06.OT.G
                },
                {
                    35U,
                    FLARE06.OT.H
                },
                {
                    163U,
                    FLARE06.OT.B
                },
                {
                    151U,
                    FLARE06.OT.A
                },
                {
                    144U,
                    FLARE06.OT.A
                },
                {
                    146U,
                    FLARE06.OT.A
                },
                {
                    148U,
                    FLARE06.OT.A
                },
                {
                    150U,
                    FLARE06.OT.A
                },
                {
                    152U,
                    FLARE06.OT.A
                },
                {
                    153U,
                    FLARE06.OT.A
                },
                {
                    154U,
                    FLARE06.OT.A
                },
                {
                    145U,
                    FLARE06.OT.A
                },
                {
                    147U,
                    FLARE06.OT.A
                },
                {
                    149U,
                    FLARE06.OT.A
                },
                {
                    143U,
                    FLARE06.OT.B
                },
                {
                    123U,
                    FLARE06.OT.B
                },
                {
                    124U,
                    FLARE06.OT.B
                },
                {
                    65030U,
                    FLARE06.OT.B
                },
                {
                    77U,
                    FLARE06.OT.A
                },
                {
                    70U,
                    FLARE06.OT.A
                },
                {
                    72U,
                    FLARE06.OT.A
                },
                {
                    74U,
                    FLARE06.OT.A
                },
                {
                    76U,
                    FLARE06.OT.A
                },
                {
                    78U,
                    FLARE06.OT.A
                },
                {
                    79U,
                    FLARE06.OT.A
                },
                {
                    80U,
                    FLARE06.OT.A
                },
                {
                    71U,
                    FLARE06.OT.A
                },
                {
                    73U,
                    FLARE06.OT.A
                },
                {
                    75U,
                    FLARE06.OT.A
                },
                {
                    142U,
                    FLARE06.OT.A
                },
                {
                    65036U,
                    FLARE06.OT.F
                },
                {
                    6U,
                    FLARE06.OT.A
                },
                {
                    7U,
                    FLARE06.OT.A
                },
                {
                    8U,
                    FLARE06.OT.A
                },
                {
                    9U,
                    FLARE06.OT.A
                },
                {
                    17U,
                    FLARE06.OT.E
                },
                {
                    65037U,
                    FLARE06.OT.F
                },
                {
                    18U,
                    FLARE06.OT.E
                },
                {
                    20U,
                    FLARE06.OT.A
                },
                {
                    113U,
                    FLARE06.OT.B
                },
                {
                    126U,
                    FLARE06.OT.B
                },
                {
                    127U,
                    FLARE06.OT.B
                },
                {
                    114U,
                    FLARE06.OT.B
                },
                {
                    208U,
                    FLARE06.OT.B
                },
                {
                    65031U,
                    FLARE06.OT.B
                },
                {
                    221U,
                    FLARE06.OT.D
                },
                {
                    222U,
                    FLARE06.OT.C
                },
                {
                    65039U,
                    FLARE06.OT.A
                },
                {
                    198U,
                    FLARE06.OT.B
                },
                {
                    90U,
                    FLARE06.OT.A
                },
                {
                    216U,
                    FLARE06.OT.A
                },
                {
                    217U,
                    FLARE06.OT.A
                },
                {
                    101U,
                    FLARE06.OT.A
                },
                {
                    141U,
                    FLARE06.OT.B
                },
                {
                    115U,
                    FLARE06.OT.B
                },
                {
                    65049U,
                    FLARE06.OT.E
                },
                {
                    0U,
                    FLARE06.OT.A
                },
                {
                    102U,
                    FLARE06.OT.A
                },
                {
                    96U,
                    FLARE06.OT.A
                },
                {
                    38U,
                    FLARE06.OT.A
                },
                {
                    254U,
                    FLARE06.OT.A
                },
                {
                    253U,
                    FLARE06.OT.A
                },
                {
                    252U,
                    FLARE06.OT.A
                },
                {
                    251U,
                    FLARE06.OT.A
                },
                {
                    250U,
                    FLARE06.OT.A
                },
                {
                    249U,
                    FLARE06.OT.A
                },
                {
                    248U,
                    FLARE06.OT.A
                },
                {
                    255U,
                    FLARE06.OT.A
                },
                {
                    65054U,
                    FLARE06.OT.A
                },
                {
                    65053U,
                    FLARE06.OT.A
                },
                {
                    194U,
                    FLARE06.OT.B
                },
                {
                    93U,
                    FLARE06.OT.A
                },
                {
                    94U,
                    FLARE06.OT.A
                },
                {
                    42U,
                    FLARE06.OT.A
                },
                {
                    65050U,
                    FLARE06.OT.A
                },
                {
                    98U,
                    FLARE06.OT.A
                },
                {
                    99U,
                    FLARE06.OT.A
                },
                {
                    100U,
                    FLARE06.OT.A
                },
                {
                    65052U,
                    FLARE06.OT.B
                },
                {
                    65035U,
                    FLARE06.OT.F
                },
                {
                    16U,
                    FLARE06.OT.E
                },
                {
                    164U,
                    FLARE06.OT.B
                },
                {
                    155U,
                    FLARE06.OT.A
                },
                {
                    156U,
                    FLARE06.OT.A
                },
                {
                    157U,
                    FLARE06.OT.A
                },
                {
                    158U,
                    FLARE06.OT.A
                },
                {
                    159U,
                    FLARE06.OT.A
                },
                {
                    160U,
                    FLARE06.OT.A
                },
                {
                    161U,
                    FLARE06.OT.A
                },
                {
                    162U,
                    FLARE06.OT.A
                },
                {
                    125U,
                    FLARE06.OT.B
                },
                {
                    223U,
                    FLARE06.OT.A
                },
                {
                    82U,
                    FLARE06.OT.A
                },
                {
                    83U,
                    FLARE06.OT.A
                },
                {
                    84U,
                    FLARE06.OT.A
                },
                {
                    85U,
                    FLARE06.OT.A
                },
                {
                    86U,
                    FLARE06.OT.A
                },
                {
                    87U,
                    FLARE06.OT.A
                },
                {
                    81U,
                    FLARE06.OT.A
                },
                {
                    65038U,
                    FLARE06.OT.F
                },
                {
                    10U,
                    FLARE06.OT.A
                },
                {
                    11U,
                    FLARE06.OT.A
                },
                {
                    12U,
                    FLARE06.OT.A
                },
                {
                    13U,
                    FLARE06.OT.A
                },
                {
                    19U,
                    FLARE06.OT.E
                },
                {
                    129U,
                    FLARE06.OT.B
                },
                {
                    128U,
                    FLARE06.OT.B
                },
                {
                    89U,
                    FLARE06.OT.A
                },
                {
                    218U,
                    FLARE06.OT.A
                },
                {
                    219U,
                    FLARE06.OT.A
                },
                {
                    69U,
                    FLARE06.OT.I
                },
                {
                    65044U,
                    FLARE06.OT.A
                },
                {
                    122U,
                    FLARE06.OT.A
                },
                {
                    65042U,
                    FLARE06.OT.E
                },
                {
                    121U,
                    FLARE06.OT.B
                },
                {
                    165U,
                    FLARE06.OT.B
                },
                {
                    65043U,
                    FLARE06.OT.A
                },
                {
                    97U,
                    FLARE06.OT.A
                }
            };
                int j = 0;
                while (j < b.Length)
                {
                    bool flag = b[j] == 254;
                    uint num;
                    if (flag)
                    {
                        num = 65024U + (uint)b[j + 1];
                        j++;
                    }
                    else
                    {
                        num = (uint)b[j];
                    }
                    FLARE06.OT ot = dictionary[num];
                    j++;
                    switch (ot)
                    {
                        case FLARE06.OT.B:
                            {
                                uint num2 = (uint)FLARE15.flare_68(b, j);
                                num2 ^= 2727913149U;

                                b[j] = (byte)num2;
                                b[j + 1] = (byte)(num2 >> 8);
                                b[j + 2] = (byte)(num2 >> 16);
                                b[j + 3] = (byte)(num2 >> 24);
                                j += 4;
                                break;
                            }
                        case FLARE06.OT.C:
                        case FLARE06.OT.E:
                            j++;
                            break;
                        case FLARE06.OT.D:
                        case FLARE06.OT.G:
                            j += 4;
                            break;
                        case FLARE06.OT.F:
                            j += 2;
                            break;
                        case FLARE06.OT.H:
                            j += 8;
                            break;
                        case FLARE06.OT.I:
                            j += 4 + FLARE15.flare_68(b, j) * 4;
                            break;
                    }
                }
                return b;
            }
        }
    }
}
