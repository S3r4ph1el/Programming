n = int(input())

for i in range(n):
    string = str(input())

    primeiro = string.find('1')
    ultimo = string.rfind('1')
    cont = 0

    for j in range(primeiro, ultimo):
        if string[j] == '0':
            cont += 1

    print(cont)