N = int(input())
# 4의 배수만큼 반복
for i in range(N):
    if i % 4 == 0:
        print('long ', end='')
print('int')