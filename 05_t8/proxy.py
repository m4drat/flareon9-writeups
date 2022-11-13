import socket


def process_connection(conn, addr, to_send, session_num):
    # receive data from client and send response
    print(f"Iter: {session_num}. Connection from {addr} has been established.")
    data = conn.recv(1024)
    print(data)
    conn.send(to_send)
    conn.close()


def main():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind(('localhost', 80))
    s.listen(1)

    response1 = b"\x48\x54\x54\x50\x2f\x31\x2e\x30\x20\x32\x30\x30\x20\x4f\x4b\x0d" \
        b"\x0a\x53\x65\x72\x76\x65\x72\x3a\x20\x41\x70\x61\x63\x68\x65\x20" \
        b"\x4f\x6e\x20\x39\x20\x0d\x0a\x44\x61\x74\x65\x3a\x20\x54\x75\x65" \
        b"\x2c\x20\x31\x34\x20\x4a\x75\x6e\x20\x32\x30\x32\x32\x20\x31\x36" \
        b"\x3a\x31\x34\x3a\x33\x36\x20\x47\x4d\x54\x0d\x0a\x0d\x0a\x54\x64" \
        b"\x51\x64\x42\x52\x61\x31\x6e\x78\x47\x55\x30\x36\x64\x62\x42\x32" \
        b"\x37\x45\x37\x53\x51\x37\x54\x4a\x32\x2b\x63\x64\x37\x7a\x73\x74" \
        b"\x4c\x58\x52\x51\x63\x4c\x62\x6d\x68\x32\x6e\x54\x76\x44\x6d\x31" \
        b"\x70\x35\x49\x66\x54\x2f\x43\x75\x30\x4a\x78\x53\x68\x6b\x36\x74" \
        b"\x48\x51\x42\x52\x57\x77\x50\x6c\x6f\x39\x7a\x41\x31\x64\x49\x53" \
        b"\x66\x73\x6c\x6b\x4c\x67\x47\x44\x73\x34\x31\x57\x4b\x31\x32\x69" \
        b"\x62\x57\x49\x66\x6c\x71\x4c\x45\x34\x59\x71\x33\x4f\x59\x49\x45" \
        b"\x6e\x4c\x4e\x6a\x77\x56\x48\x72\x6a\x4c\x32\x55\x34\x4c\x75\x33" \
        b"\x6d\x73\x2b\x48\x51\x63\x34\x6e\x66\x4d\x57\x58\x50\x67\x63\x4f" \
        b"\x48\x62\x34\x66\x68\x6f\x6b\x6b\x39\x33\x2f\x41\x4a\x64\x35\x47" \
        b"\x54\x75\x43\x35\x7a\x2b\x34\x59\x73\x6d\x67\x52\x68\x31\x5a\x39" \
        b"\x30\x79\x69\x6e\x4c\x42\x4b\x42\x2b\x66\x6d\x47\x55\x79\x61\x67" \
        b"\x54\x36\x67\x6f\x6e\x2f\x4b\x48\x6d\x4a\x64\x76\x41\x4f\x51\x38" \
        b"\x6e\x41\x6e\x6c\x38\x4b\x2f\x30\x58\x47\x2b\x38\x7a\x59\x51\x62" \
        b"\x5a\x52\x77\x67\x59\x36\x74\x48\x76\x76\x70\x66\x79\x6e\x39\x4f" \
        b"\x58\x43\x79\x75\x63\x74\x35\x2f\x63\x4f\x69\x38\x4b\x57\x67\x41" \
        b"\x4c\x76\x56\x48\x51\x57\x61\x66\x72\x70\x38\x71\x42\x2f\x4a\x74" \
        b"\x54\x2b\x74\x35\x7a\x6d\x6e\x65\x7a\x51\x6c\x70\x33\x7a\x50\x4c" \
        b"\x34\x73\x6a\x32\x43\x4a\x66\x63\x55\x54\x4b\x35\x63\x6f\x70\x62" \
        b"\x5a\x43\x79\x48\x65\x78\x56\x44\x34\x6a\x4a\x4e\x2b\x4c\x65\x7a" \
        b"\x4a\x45\x74\x72\x44\x58\x50\x31\x44\x4a\x4e\x67\x3d\x3d"

    response2 = b"\x48\x54\x54\x50\x2f\x31\x2e\x30\x20\x32\x30\x30\x20\x4f\x4b\x0d" \
        b"\x0a\x53\x65\x72\x76\x65\x72\x3a\x20\x41\x70\x61\x63\x68\x65\x20" \
        b"\x4f\x6e\x20\x39\x20\x0d\x0a\x44\x61\x74\x65\x3a\x20\x54\x75\x65" \
        b"\x2c\x20\x31\x34\x20\x4a\x75\x6e\x20\x32\x30\x32\x32\x20\x31\x36" \
        b"\x3a\x31\x34\x3a\x33\x36\x20\x47\x4d\x54\x0d\x0a\x0d\x0a\x46\x31" \
        b"\x4b\x46\x6c\x5a\x62\x4e\x47\x75\x4b\x51\x78\x72\x54\x44\x2f\x4f" \
        b"\x52\x77\x75\x64\x4d\x38\x53\x38\x6b\x4b\x69\x4c\x35\x46\x39\x30" \
        b"\x36\x59\x6c\x52\x38\x54\x4b\x64\x38\x58\x72\x4b\x50\x65\x44\x59" \
        b"\x5a\x30\x48\x6f\x75\x69\x42\x61\x6d\x79\x51\x66\x39\x2f\x4e\x73" \
        b"\x37\x75\x33\x43\x32\x55\x45\x4d\x4c\x6f\x43\x41\x30\x42\x38\x45" \
        b"\x75\x5a\x70\x31\x46\x70\x77\x6e\x65\x64\x56\x6a\x50\x53\x64\x5a" \
        b"\x46\x6a\x6b\x69\x65\x59\x71\x57\x7a\x4b\x41\x37\x75\x70\x2b\x4c" \
        b"\x59\x65\x39\x42\x34\x64\x6d\x41\x55\x4d\x32\x6c\x59\x6b\x6d\x42" \
        b"\x53\x71\x50\x4a\x59\x54\x36\x6e\x45\x67\x32\x37\x6e\x33\x58\x36" \
        b"\x35\x36\x4d\x4d\x4f\x78\x4e\x49\x48\x74\x30\x48\x73\x4f\x44\x30" \
        b"\x64\x2b"

    session_num = 1

    print('Flare Proxy server started on port 80')

    while True:
        conn, address = s.accept()
        process_connection(conn, address, response1, session_num)
        session_num += 1

        conn, address = s.accept()
        process_connection(conn, address, response2, session_num)
        session_num += 1


if __name__ == '__main__':
    main()
