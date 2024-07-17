s = str(input())

dial = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']

time = 0

for i in range(len(s)):
    for j in range(len(dial)):
        if s[i] in dial[j]:
            time += j + 3

print(time)