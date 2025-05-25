import socket

def UDPserver(host,port):

    global udpd
    udpd = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    udpd.bind((host, port))

    senha, addr = udpd.recvfrom(1024)

    senha = senha.decode('utf-8')

    if (not any(c.isupper() for c in senha) or
        not any(c.islower() for c in senha) or
        not any(c.isdigit() for c in senha) or
        len(senha) < 6 or len(senha) > 32 or
        not senha.isalnum()):
        udpd.sendto(f"Senha inválida!".encode('utf-8'), addr)
    else:
        udpd.sendto(b'Senha valida.', addr)

    udpd.close()