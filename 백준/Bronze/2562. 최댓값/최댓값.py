A = []
while True:
    try:
        N = int(input())
        A.append(N)
    except:
        break
print(max(A))
print(A.index(max(A))+1)