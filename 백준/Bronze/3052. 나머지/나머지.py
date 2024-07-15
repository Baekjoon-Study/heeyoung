set1 = set()

for i in range(10):
    n = int(input())
    set1.add(n % 42)

print(len(set1))