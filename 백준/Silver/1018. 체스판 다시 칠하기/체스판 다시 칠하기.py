
n, m = map(int, input().split())

board = []
count = []

for _ in range(n):
    board.append(input())

for a in range(n-7):
    for b in range(m-7):
        white = 0 
        black = 0
        for i in range(a, a+8):
            for j in range(b, b+8):
                if (i+j)%2 == 0:
                    if board[i][j] != 'W':
                        white += 1
                    if board[i][j] != 'B':
                        black += 1
                else:
                    if board[i][j] != 'B':
                        white += 1
                    if board[i][j] != 'W':
                        black += 1
        count.append(white)
        count.append(black)
    
print(min(count))


