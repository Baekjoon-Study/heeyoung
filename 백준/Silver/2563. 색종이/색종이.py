N = int(input()) 

arr = [[0] * 100 for _ in range(100)]

for i in range(N):
    x, y = map(int, input().split())
    for j in range(x, x+10):
        for k in range(y, y+10):
            arr[j][k] = 1

ans = 0

for i in range(100):
    ans += arr[i].count(1)

print(ans)