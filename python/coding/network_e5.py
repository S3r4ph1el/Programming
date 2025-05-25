import socket

def TCPserver(host,port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.bind((host, port))
    
    sock.listen(1)
    conn, addr = sock.accept()

    data = conn.recv(1024)
    if data.decode('utf-8') == f'Hello, world! From {host}:{port}':
        print("Servidor recebeu a mensagem correta")
        conn.send(b'Sucesso')
    else:
        print("Servidor nao recebeu a mensagem correta")
        conn.send(b'Erro')
    conn.close()
    sock.close()