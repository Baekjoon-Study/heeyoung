S = str(input())
temp = [-1] * 26

# temp 에 순서 추가하기
for i in range(len(S)):
    s = ord(S[i]) - 97 # a-z : 0-25 순서 정렬
    if temp[s] == -1:
        temp[s] += S.index(S[i]) + 1
    
print(" ".join(map(str, temp)))