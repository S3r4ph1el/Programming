import http.client
import socket

# dn = "leite.com.br"           # Nome do domínio
# ip = socket.gethostbyname(dn) # Obter o IP do domínio
# dn = "192.168.10.5"           # Nome do domínio
# ip = socket.gethostbyaddr(dn) # Obter o IP do domínio
# print(f"{dn}: {ip}")          # Imprimir o IP do domínio

HOST = 'localhost'
PORT = 4443

conn = http.client.HTTPConnection(HOST, PORT)   # Estabelecer conexão

PAGE = input("Qual página você quer acessar? ") # Solicitar ao usuário
conn.request('GET', '/' + PAGE)                 # Enviar requisição onde quiser
response = conn.getresponse()                   # Obter resposta
headers = response.getheaders()                 # Obter cabeçalhos

print(f'Status: {response.status} {response.reason}\n') # Imprimir status e razão
for header, value in headers:
    print(f'{header}: {value}')
print()

data = response.read()                                  # Ler dados
print(data.decode('utf-8'))                             # Imprimir dados decodificados
conn.close()                                            # Fechar conexão