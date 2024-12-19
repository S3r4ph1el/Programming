def divisores(num):
    divisores = []
    for i in range(1, num+1):
        if num % i == 0:
            divisores.append(i)
    return divisores