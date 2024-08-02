n = int(input())

if n % 5 == 0: # 5로 나누어 떨어질 때
    print(n//5)

else: 
    count = 0
    while n > 0:
        n -= 3
        count += 1
        if n % 5 == 0: # 5와 3의 조합으로 나눠 담을 수 있을 때
            count += n//5
            print(count)
            break
        elif n == 1 or n == 2: # 담을 수 없을 때
            print(-1)
            break
        elif n == 0: # 3으로 나누어 떨어질 때
            print(count)
            break

