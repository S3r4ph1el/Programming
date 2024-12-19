n = int(input())

lista = list(map(int, input().split()))

sorted_list = sorted(lista, reverse=True)

t = r = 0

for i in range(n):
    if i < 11:
        t += sorted_list[i]
    elif i >= 11 and i < 22:
        r += sorted_list[i]
    else:
        break

print(t - r)