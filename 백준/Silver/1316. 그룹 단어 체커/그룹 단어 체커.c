#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char str[N][101];
    int count = 0;

    for (int i = 0; i < N; i++) {

        scanf("%s", str[i]);
        int arr[26] = {0,};
        int valid = 1;

        arr[str[i][0] - 97] += 1; // 첫번째 문자 더하기

        for (int j = 1; j < strlen(str[i]); j++) {
            
            if (str[i][j-1] == str[i][j]) { 
                arr[str[i][j] - 97] += 1;
            } 
            else {

                if (arr[str[i][j] - 97] == 0) {
                    arr[str[i][j] - 97] += 1;
                }
                else {
                    valid = 0;
                    break;
                }
            }
        }
        if (valid == 1)
            count += 1;
    }

    printf("%d\n", count);

    return 0;
}