lista = [1,1,2,2,2,8]

t = list(map(int, input().split()))

listb = []

for i in range(len(lista)):
    b = lista[i] - t[i]
    listb.append(b)

print(" ".join(map(str, listb)))