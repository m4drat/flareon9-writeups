import idautils
import idaapi
import ida_bytes
import idc


def decrypt_str(s: bytes) -> bytes:
    return b''.join(bytes([b ^ 0x17]) for b in s)


def string_len(addr: int) -> int:
    str_len = 0
    while ida_bytes.get_byte(addr) != 0:
        str_len += 1
        addr += 1
    return str_len


def patch_string(addr, new_str):
    for i, b in enumerate(new_str):
        idc.patch_byte(addr + i, b)


decode_string_loc = 0x100014AE
xrefs = list(idautils.XrefsTo(decode_string_loc))

for xref in xrefs:
    call_args = idaapi.get_arg_addrs(xref.frm)

    if call_args:
        enc_str_push_loc = call_args[0]
        enc_str_loc = idc.get_operand_value(enc_str_push_loc, 0)
        enc_str_len = string_len(enc_str_loc)  # idc.get_strlit_contents(enc_str_loc)
        enc_str = idaapi.get_bytes(enc_str_loc, enc_str_len)
        dec_str = decrypt_str(enc_str)
        patch_string(enc_str_loc, dec_str)

        print(f'{hex(enc_str_loc)} -> {dec_str.decode("ascii")}')
