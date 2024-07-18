N, M = map(int, input().split())

listA = []
listB = []

# 행렬 A 
for i in range(N):
    a = list(map(int, input().split()))
    listA.append(a)

# 행렬 B 
for i in range(N):
    b = list(map(int, input().split()))
    listB.append(b)

# A + B 행렬 구하기

listC = []

for i in range(N):
    C = []
    for j in range(M):
        sum = listA[i][j] + listB[i][j]
        C.append(sum)
    listC.append(C)

# 출력

for row in listC:
    for element in row:
        print(element, end=' ')
    print()