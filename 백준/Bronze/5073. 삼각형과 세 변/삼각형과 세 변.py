while True:
    t = list(map(int, input(). split()))
    if t[0] == t[1] == t[2] == 0:
        break
    elif t[0] == t[1] == t[2]:
        print('Equilateral')
    else:
        t.sort()
        if t[2] >= t[0] + t[1]:
            print('Invalid')
        else:
            if t[0] == t[1] or t[1] == t[2]:
                print('Isosceles')
            else:
                print('Scalene')