def frequencia(msg):

    if msg == '':
        return ''

    strlen = len(msg)
    maior = None

    for i in range(strlen):

        freq = 0
        letra = msg[i]

        for j in range(strlen):

            if letra == msg[j]:
                freq += 1

        if freq > maior:
            maior = freq
            letra_maior = letra

    return letra_maior