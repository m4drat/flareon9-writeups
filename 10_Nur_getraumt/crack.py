# -*- coding: utf-8 -*-
# @Author: madrat


def crc16_ccitt(data):
    crc = 0xFFFF
    for b in data:
        crc = ((crc >> 8) | (crc << 8)) & 0xFFFF
        crc ^= b
        crc ^= (crc & 0xFF) >> 4
        crc ^= (crc << 12) & 0xFFFF
        crc ^= ((crc & 0xFF) << 5) & 0xFFFF
    return crc


def xor_data(input: bytes, data: bytes) -> bytes:
    assert len(input) == len(data)
    return bytes([input[i] ^ data[i] for i in range(len(input))])


def main():
    flag_rsrc = b"\x0C\x00\x1D\x1A\x7F\x17\x1C\x4E\x02\x11\x28\x08\x10\x48\x05\x00\x00\x1A\x7F\x2A\xF6\x17\x44\x32\x0F\xFC\x1A\x60\x2C\x08\x10\x1C\x60\x02\x19\x41\x17\x11\x5A\x0E\x1D\x0E\x39\x0A\x04"

    # known = b'Hast du etwas Zeit f\x00r mich?Hast du etwas Zei'

    print(xor_data(b"@flare-on.com", flag_rsrc[-13:]))
    # print(xor_data(known, flag_rsrc[:len(known)]))


if __name__ == "__main__":
    main()
