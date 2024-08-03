
res = []

for i in range(5):
    n = int(input())
    res.append(n)

res.sort()

print(sum(res)//5)
print(res[len(res)//2])