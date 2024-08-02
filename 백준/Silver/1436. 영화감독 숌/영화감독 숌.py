n = int(input())

i = 666
arr = []

while True:
    if '666' in str(i):
        arr.append(i)
    i += 1

    if len(arr) == n:
        break

print(max(arr))