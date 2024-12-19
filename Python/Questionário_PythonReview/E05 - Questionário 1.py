buracos = int(input())
x_coelho, y_coelho = map(float, input().split())
x_raposa, y_raposa = map(float, input().split())

for i in range(buracos):
    x_buraco, y_buraco = map(float, input().split())
    distancia_coelho = ((x_coelho - x_buraco)**2 + (y_coelho - y_buraco)**2)**0.5
    distancia_raposa = ((x_raposa - x_buraco)**2 + (y_raposa - y_buraco)**2)**0.5
    if distancia_coelho < distancia_raposa / 2:
        print('O coelho pode escapar pelo buraco ({:.3f}, {:.3f}).'.format(x_buraco, y_buraco))
        exit()

print('O coelho nao pode escapar.')