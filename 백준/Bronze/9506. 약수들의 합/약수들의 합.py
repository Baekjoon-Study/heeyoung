while True:
    n = int(input())
    if n == -1:
        break
    listn = []
    for i in range(1,n):
        if n % i == 0:
            listn.append(i)
        ans = 0
    for j in range(len(listn)):
        ans += listn[j]
    if ans == n:
        print(n, '= ', end='')
        print(*listn, sep=' + ')
    else:
        print(n, 'is NOT perfect.')