import subprocess


def main():
    guess = b""
    while True:
        for b in range(0x1F + 1, 256):
            p = subprocess.Popen(
                ["darn_mice.exe", guess + bytes([b])], stdout=subprocess.PIPE
            )
            if p.wait() != 0:
                print(f"Current guess: {guess + bytes([b])}, trying next one...")
            else:
                out, err = p.communicate()
                if b"Nibble..." in out:
                    print("Found byte: {}".format(b))
                    print("Current guess: {}".format(guess + bytes([b])))
                    guess = guess + bytes([b])
                    break


if __name__ == "__main__":
    main()
