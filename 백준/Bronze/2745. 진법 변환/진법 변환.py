N, B = input().split()
N = list(N)
B = int(B)

ans = 0

for i in range(len(N)):
    if 65 <= ord(N[i]) <= 90:
        ans += int(ord(N[i])-55) * (B ** (len(N)-i-1))
    else:
        ans += int(N[i]) * (B ** (len(N)-i-1))

print(ans)