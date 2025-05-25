import http.server
import socketserver

HOST = 'localhost'  # Endereço do servidor
PORT = 4443
httpd = None

try:
    # Handler é um manipulador de requisições HTTP
    Handler = http.server.SimpleHTTPRequestHandler
    httpd = socketserver.TCPServer((HOST, PORT), Handler)

    httpd.serve_forever()  # Iniciar o servidor HTTP
    # O servidor ficará rodando indefinidamente, aguardando requisições
except Exception as e:
    if httpd is not None:
        httpd.shutdown()      # Parar o servidor se necessário
        httpd.server_close()  # Fechar o servidor
    raise