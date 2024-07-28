
lista = []

for i in range(3):
    a = int(input())
    lista.append(a)

if sum(lista) == 180:
    if lista[0] == lista[1] == lista[2]:
        print('Equilateral')
    elif lista[0] == lista[1] or lista[0] == lista[2]:
        print('Isosceles')
    elif lista[1] == lista[2]:
        print('Isosceles')
    else:
        print('Scalene')

else:
    print('Error')
