

n = int(input())

arr = []

for _ in range(n):
    num = int(input())
    arr.append(num)

arr = sorted(arr)

for i in range(n):
    print(arr[i])
