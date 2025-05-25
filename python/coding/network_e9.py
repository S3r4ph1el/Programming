import socket

def UDPclient(host,port):

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    message = f"Hello, world! From {host}:{port}".encode('utf-8')
    sock.sendto(message, (host, port))

    data, addr = sock.recvfrom(1024)
    print(f"Saida:  {data.decode('utf-8')}")
    sock.close()