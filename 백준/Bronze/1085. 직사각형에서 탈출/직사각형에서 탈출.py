
x, y, w, h = map(int,input().split())

ans = [0 + x, 0 + y, w - x, h - y]

print(min(ans))

