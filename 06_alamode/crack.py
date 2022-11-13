# -*- coding: utf-8 -*-
# @Author: madrat

from arc4 import ARC4


def main():
    arc4 = ARC4(b'\x55\x8B\xEC\x83\xEC\x20\xEB\xFE')
    decrypted_password = arc4.decrypt(b'\x3E\x39\x51\xFB\xA2\x11\xF7\xB9\x2C').decode('ascii')
    decrypted_flag = arc4.decrypt(b'\xE1\x60\xA1\x18\x93\x2E\x96\xAD\x73\xBB\x4A\x92\xDE\x18\x0A\xAA\x41\x74\xAD\xC0\x1D\x9F\x3F\x19\xFF\x2B\x02\xDB\xD1\xCD\x1A').decode('ascii')

    print(f'Password: {decrypted_password}')
    print(f'Flag: {decrypted_flag}')


if __name__ == "__main__":
    main()
