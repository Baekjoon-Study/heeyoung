while True:
    a, b = map(int, input().split())
    if a == b:
        break
    elif b % a == 0:
        print('factor')
    elif a % b == 0:
        print('multiple')
    else:
        print('neither')