import socket

def TCPclient(host,port):

    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((host, port))
    
    message = f'Hello, world! From {host}:{port}'
    sock.sendall(message.encode('utf-8'))
    
    data = sock.recv(1024)
    print(f"Saida: {data.decode('utf-8')}")
    sock.close()