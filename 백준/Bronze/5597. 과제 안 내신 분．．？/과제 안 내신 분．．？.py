set1 = set(range(1,31))
set2 = set()

for i in range(28):
    n = int(input())
    set2.add(n)
set3 = set1 - set2
print(min(set3))
print(max(set3))