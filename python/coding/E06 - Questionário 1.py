import math

byte = int(input())
print("Transmitindo", byte, "bytes...")

segundos = 0
segundos_totais = 0
soma = 0

while byte > 0:
    byte_por_segundo = int(input())
    soma += byte_por_segundo
    segundos += 1
    segundos_totais += 1
    if byte - soma == 0:
        print("Tempo total:", segundos_totais, "segundos.")
        break
    if segundos == 5:
        if soma == 0:
            print("Tempo restante: pendente...")
        else:
            restam = (byte - soma) / (soma / 5)
            byte -= soma
            resultado = math.ceil(round(restam, 6))
            print("Tempo restante:", resultado, "segundos.")  
        segundos = 0
        soma = 0