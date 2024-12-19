def primos_gemeos(n):
    def eh_primo(o):
        if o < 2:
            return False
        for j in range(2, int(o ** 0.5) + 1):
            if o % j == 0:
                return False
        return True
    lista = []
    i = 3
    k = 0
    while k < n:
        if eh_primo(i) and eh_primo(i + 2):
            lista.append((i, i + 2))
            k += 1
        i += 2
    return lista