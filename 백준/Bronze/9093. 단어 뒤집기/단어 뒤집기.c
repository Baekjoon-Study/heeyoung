#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        char str[1001];
        fgets(str, 1001, stdin);
        int start_point = -1;
        int end_point = 0;
        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == ' ' || str[j] == '\n') {
                for (int k = end_point-1; k > start_point; k--) {
                    printf("%c", str[k]);
                }
                printf(" ");
                start_point = end_point;
            }
            end_point++;
        }
        printf("\n");
    }

    return 0;
}