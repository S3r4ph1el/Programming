import socket

mysocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

mysocket.connect(('localhost', 8080))

mysocket.send(b'GET / HTTP/1.0\r\nHost: localhost\r\n\r\n')

while True:
    data = mysocket.recv(1024)
    if not data:
        break
    print(data.decode('utf-8'), end='')