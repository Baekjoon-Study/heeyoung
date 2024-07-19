matrix = []
length = []

for i in range(5):
    word = input()
    matrix.append(word)
    length.append(len(word))

ans = ''
for i in range(max(length)):
    for j in range(5):
        if i < len(matrix[j]):
            ans += matrix[j][i]

print(ans)