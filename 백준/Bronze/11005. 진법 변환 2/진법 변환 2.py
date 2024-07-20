
N, B = map(int, input().split())

listn = []

while N >= B:
    r = N % B
    N //= B
    listn.append(r)
listn.append(N)
listn.reverse()

ans = []

for i in range (len(listn)):
    k = listn[i] + 55
    if 65 <= k <= 90:
        ans.append(chr(k))
    else:
        ans.append(listn[i])

print(*ans, sep='')

