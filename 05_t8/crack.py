# -*- coding: utf-8 -*-
# @Author: madrat

import hashlib
import base64
from arc4 import ARC4

# Encrypted ahoy - CD E0 4B DB 38 9B 6A 4C
# Hash: 62fc201330477bcef2e97dbb97e52f19
# FO91329

# i_s33_you_m00n


def to_wide(s):
    return b'\x00'.join([bytes([ord(c)]) for c in s]) + b'\x00'


def main():
    template = 'FO9{}'
    plaintext_ahoy = b'a\x00h\x00o\x00y\x00'
    encrypted_ahoy = base64.b64decode(
        b"\x79\x00\x64\x00\x4e\x00\x38\x00\x42\x00\x58\x00\x71\x00\x31\x00\x36\x00\x52\x00\x45\x00\x3d\x00".decode('utf-16'))
    # encrypted_ahoy = b'\xCD\xE0\x4B\xDB\x38\x9B\x6A\x4C'

    plaintext_sce = b's\x00c\x00e\x00'
    encrypted_sce = base64.b64decode(
       b"\x56\x00\x59\x00\x42\x00\x55\x00\x70\x00\x5a\x00\x64\x00\x47\x00".decode('utf-16'))

    for i in range(100000):
        curr_try = to_wide(template.format(i))
        curr_key = to_wide(hashlib.md5(curr_try).hexdigest())

        # decrypt data with RC4
        arc4 = ARC4(curr_key)
        if arc4.decrypt(encrypted_ahoy) == plaintext_ahoy:
            print('Found: {} / {}'.format(curr_try.decode('utf-16'), curr_try))
            print('Hash: {}'.format(hashlib.md5(curr_try).hexdigest()))
            break


if __name__ == "__main__":
    main()
