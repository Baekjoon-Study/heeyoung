T = int(input())

# R, S 입력 받기
for i in range(T):
    R, S = input().split()
    R = int(R)
    S = str(S)
    for j in range(len(S)): # 문자열 길이만큼 반복
        for k in range(R): # R 만큼 반복
            print(S[j], end='')
    print()