n = int(input())

count = 0

for i in range(n):
    word = str(input())
    group_word = True

    for j in range(len(word)-1):
        if word[j] != word[j+1]:
            if word[j] in word[j+1:]:
                group_word = False

    if group_word == True:
        count += 1

print(count)
