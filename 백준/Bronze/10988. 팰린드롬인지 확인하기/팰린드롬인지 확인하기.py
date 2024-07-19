S = str(input())
listS = []

for i in range(len(S)):
        if S[i] == S[-(i+1)]:
            listS.append('1')
        else:
            listS.append('0')

if '0' not in listS: print('1')
else: print('0')