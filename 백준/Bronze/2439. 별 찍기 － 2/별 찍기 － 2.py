N = int(input())
for i in range(N):
    j = i 
    while j < N-1:
        print(' ', end='')
        j += 1
    for k in range(i+1):
        print('*', end='')
    print('')