import socket

def UDPserver(host,port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((host, port))
    
    data, addr = sock.recvfrom(1024)
    if data.decode('utf-8') == f'Hello, world! From {host}:{port}':
        print("Servidor recebeu a mensagem correta")
        sock.sendto(b'Sucesso', addr)
    else:
        print("Servidor nao recebeu a mensagem correta")
        sock.sendto(b'Erro', addr)
    sock.close()