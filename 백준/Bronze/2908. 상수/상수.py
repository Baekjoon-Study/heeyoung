a, b = map(str, input().split())

A = a[::-1]
A = int(A)

B = b[::-1]
B = int(B)

print(max(A,B))