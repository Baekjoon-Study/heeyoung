
a = input()

croatia = ['c=','c-','dz=','d-','lj','nj','s=','z=']

counta = 0

for i in (croatia):
    a = a.replace(i,'*')

print(len(a))