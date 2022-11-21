# -*- coding: utf-8 -*-
# @Author: madrat


from Crypto.Cipher import ChaCha20
from base64 import b64decode


def main():
    public_exponent = 65537
    modulus = int.from_bytes(bytes.fromhex('dc425c720400e05a92eeb68d0313c84a978cbcf47474cbd9635eb353af864ea46221546a0f4d09aaa0885113e31db53b565c169c3606a241b569912a9bf95c91afbc04528431fdcee6044781fbc8629b06f99a11b99c05836e47638bbd07a232c658129aeb094ddaf4c3ad34563ee926a87123bc669f71eb6097e77c188b9bc9'), byteorder='big')

    encrypted_key = int.from_bytes(bytes.fromhex('5a04e95cd0e9bf0c8cdda2cbb0f50e7db8c89af791b4e88fd657237c1be4e6599bc4c80fd81bdb007e43743020a245d5f87df1c23c4d129b659f90ece2a5c22df1b60273741bf3694dd809d2c485030afdc6268431b2287c597239a8e922eb31174efcae47ea47104bc901cea0abb2cc9ef974d974f135ab1f4899946428184c'), byteorder='big')

    decrypted_key = pow(encrypted_key, public_exponent, modulus)
    dec_msg_bytes = decrypted_key.to_bytes((decrypted_key.bit_length() + 7) // 8, byteorder='little')

    key = dec_msg_bytes[:32]
    nonce = dec_msg_bytes[36:48]

    print(f'ChaCha key: {key}')
    print(f'ChaCha nonce: {nonce}')

    encrypted_flag = b64decode(b'f4r6Y2WcXvaeucPcE+iyMTqP422UhjQhRitv6K0wjSp56Op7ZgnY0FgCPZcUa/KqYIUGSE2XDnHqggY1ukv8UY8G5K1pK+YlWw==')

    cipher = ChaCha20.new(key=key, nonce=nonce)
    plaintext = cipher.decrypt(encrypted_flag)
    print('Decrypted message: ', plaintext.decode('utf-8'))


if __name__ == "__main__":
    main()
