N = int(input())

for i in range(N):
    j = i
    while j < N - 1:
        print(" ", end='')
        j += 1
    print("*" * (2 * i + 1))

for i in range(N - 1):
    print(" " * (i + 1), end='')
    print("*" * ((2 * (N-1)) - (2*i+1)))