
N = int(input())
A = list(map(int, input().split()))

M = max(A)

listB = []

for i in range(len(A)):
    B = A[i] / M * 100
    listB.append(B)

average = sum(listB) / len(listB)
print(average)