
n, max_ = map(int, input().split())

num = list(map(int, input().split()))

arr = []

for i in range(len(num)):
    for j in range(i+1, len(num)):
        for k in range(j+1, len(num)):
            sum = num[i]+num[j]+num[k]
            if sum <= max_:
                arr.append(sum)

print(max(arr))
