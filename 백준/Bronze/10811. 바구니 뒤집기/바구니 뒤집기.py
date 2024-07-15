N, M = map(int, input().split())

A = [0] * N

for list in range(N):
    A[list] += list + 1

for ball in range(M):
    i, j = map(int, input().split())
    temp = A[i-1:j]
    temp.reverse()
    A[i-1:j] = temp
    
print(" ".join(map(str, A)))