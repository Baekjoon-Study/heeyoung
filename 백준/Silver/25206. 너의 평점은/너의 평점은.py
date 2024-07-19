grade_list = ['A+','A0','B+','B0','C+','C0','D+','D0','F']
score_list = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]

total_b = 0
total_c = 0

for i in range(20):
    a, b, c = input().split()
    b = float(b)
    if c != 'P':
        total_b += b # 전체 학점 구하기
        score_index = grade_list.index(c)
        total_c += (b * score_list[score_index])
    
ans = total_c / total_b

print(ans)