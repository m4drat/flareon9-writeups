import re
import os

patch_next_int = False
patch_next_bigint = False
condition_num = b""

big_int_fails = 0
int_fails = 0

with open("patched.js", "wb") as patched:
    with open("check_flag.js", "rb") as src:
        for line in src:
            if patch_next_int:
                if b"Math.random" in line:
                    patched_line = b'console.log("1");Math.random()'
                else:
                    patched_line = b'console.log("1")'

                if len(patched_line) < len(line):
                    print("patching int")
                    line = patched_line.ljust(len(line) - 1, b" ") + b"\n"
                else:
                    print(f'Can\'t patch Int: {line.decode("ascii")}')
                    int_fails += 1
                patch_next_int = False

            if patch_next_bigint:
                # if b'Math.random' in line:
                #     patched_line = b'console.log("2");Math.floor(Math.random())'
                # else:
                #     patched_line = b'console.log("2")'

                if b"Math.random" in line:
                    patched_line = bytes(
                        f'console.log("T:{condition_num.decode("ascii")}");Math.floor(Math.random())'.encode(
                            "ascii"
                        )
                    )
                else:
                    patched_line = bytes(
                        f'console.log("T:{condition_num.decode("ascii")}");'.encode(
                            "ascii"
                        )
                    )

                if len(patched_line) < len(line):
                    print("patching big int")
                    line = patched_line.ljust(len(line) - 1, b" ") + b"\n"
                else:
                    print(f'Can\'t patch BigInt: {line.decode("ascii")}')
                    big_int_fails += 1
                patch_next_bigint = False

            if re.match(rb"\s+if \([0-9]+\)", line):
                patch_next_int = True

            if re.match(rb"\s+if \([0-9]+n\)", line):
                patch_next_bigint = True
                condition_num = re.match(rb"\s+if \(([0-9]+n)\)", line)[1]

            if b"var target = " in line:
                patched_line = b"console.log(b);var target = [];"
                line = patched_line.ljust(len(line), b" ")

            patched.write(line)

print(f'Original size: {os.path.getsize("check_flag.js")}')
print(f'Patched size: {os.path.getsize("patched.js")}')

print(f"Failed patches: (int) {int_fails}, (BigInt) {big_int_fails}")

assert os.path.getsize("patched.js") == os.path.getsize("check_flag.js")

with open("patched.js", "rb") as patched:
    with open("anode-exp.exe", "rb+") as exe:
        exe.seek(0x35E3806)
        exe.write(patched.read())
