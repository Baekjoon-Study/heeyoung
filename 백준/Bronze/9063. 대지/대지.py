
N = int(input())

listx = []
listy = []

for _ in range(N):
    x, y = map(int, input().split())
    listx.append(x)
    listy.append(y)

if N == 1:
        print(0)

else:
    width = max(listx) - min(listx)
    length = max(listy) - min(listy)

    print(width * length)