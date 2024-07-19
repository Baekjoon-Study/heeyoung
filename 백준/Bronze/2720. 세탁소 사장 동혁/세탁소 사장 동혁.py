T = int(input())

coin = [25, 10, 5, 1] # 쿼터, 다임, 니켈, 페니

for _ in range(T):
    C = int(input())
    ans = []

    for i in coin:
        ans.append(C // i)
        C = C % i

    print(*ans)