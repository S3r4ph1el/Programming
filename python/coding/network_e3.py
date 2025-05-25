import socket

L = int(input())

for i in range(L):
    
    IP = input()
    dn = socket.gethostbyaddr(IP)
    print(str(dn[0]))