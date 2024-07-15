N, M = map(int, input().split())

A = [0] * N

for list in range(N):
    A[list] += list + 1

for ball in range(M):
    i, j = map(int, input().split())
    A[i-1],A[j-1] = A[j-1],A[i-1]
print(" ".join(map(str, A)))