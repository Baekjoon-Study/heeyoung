
X = []
Y = []

for i in range(3):
    A = list(map(int, input().split()))
    X.append(A[0])
    Y.append(A[1])

for j in range(3):
    if X.count(X[j]) == 1:
        x = X[j]
    if Y.count(Y[j]) == 1:
        y = Y[j]

print(x,y)