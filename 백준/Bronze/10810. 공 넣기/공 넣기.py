N, M = map(int, input().split())

A = [0] * N


for ball in range(M):
    # i~j번 바구니까지 k번 공을 넣기
    i, j, k = map(int, input().split())
    # k로 대체
    for num in range(i-1, j):
        A[num] = k
print(" ".join(map(str, A)))