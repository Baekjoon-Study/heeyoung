
matrix = []

# 행렬 만들기
for i in range(9):
    n = list(map(int, input().split()))
    matrix.append(n)

max = 0
max_row, max_col = 0, 0

# 최댓값 찾기
for i in range(9):
    for j in range(9):
        if matrix[i][j] >= max:
            max_row, max_col = i + 1, j + 1
            max = matrix[i][j]

print(max)
print(max_row, max_col)
