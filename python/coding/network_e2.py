import http.client

def HTTPclient(host,port):
    conn = http.client.HTTPConnection(host, port)
    
    L = int(input())

    for i in range(L):
        content = input()
        conn.request('GET', content)
        response = conn.getresponse()
        headers = response.getheaders()

        if response.status != 200:
            print("Content not found")
            continue
        
        for header, value in headers:
            if header.lower() == "content-type":
                content_type = value
                break

        if content_type == "text/html":
            print(f'Browsing: {content}')
        elif content_type == "audio/mpeg":
            print(f'Playing audio: {content}')
        elif content_type == "video/x-msvideo":
            print(f'Playing media: {content}')
        elif content_type == "application/json":
            print(f'Processing JSON: {content}')
        else:
            print(f'Unknown file/media: {content_type}-{content}')

