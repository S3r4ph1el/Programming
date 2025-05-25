import socket

def TCPserver(host, port):
    tcpd = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    tcpd.bind((host, port))
    tcpd.listen(1)

    conn, addr = tcpd.accept()
    while True:
        data = conn.recv(1024)
        if not data:
            break

        string = data.decode('utf-8')
        if not string:
            continue

        count = 1
        compact_string = ""

        for i in range(len(string)):
            if i == len(string) - 1 or string[i] != string[i + 1]:
                compact_string += string[i] + str(count)
                count = 1
            else:
                count += 1   
        conn.sendall(compact_string.encode('utf-8'))
    conn.close()
    tcpd.close()