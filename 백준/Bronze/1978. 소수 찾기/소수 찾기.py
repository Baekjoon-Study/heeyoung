
N = int(input())

num = list(map(int, input().split()))

count = 0

for i in range(len(num)):
    if num[i] == 1:
        continue
    is_prime = True
    for j in range(2,num[i]):
        if num[i] % j == 0:
            is_prime = False
            break
    if is_prime == True:
        count += 1
        
print(count)