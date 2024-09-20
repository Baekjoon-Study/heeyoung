
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);

    char arr[n][m+1];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    
    int total = 0;
    int rowcount = 0; // 경비원이 없는 행의 수
    int colcount = 0; // 경비원이 없는 열의 수

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {

            if (arr[i][j] == 'X')
                count += 1;
        }
        if (count == 0) rowcount += 1;
    }
    
    for (int j = 0; j < m; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            
            if (arr[i][j] == 'X')
                count += 1;
        }
        if (count == 0) colcount += 1;

    }

    if (rowcount > colcount) total = rowcount;
    else total = colcount;

    printf("%d\n", total);

    return 0;
}