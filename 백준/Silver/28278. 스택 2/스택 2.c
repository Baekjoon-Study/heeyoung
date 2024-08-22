#include <stdio.h>

int arr[1000001];

int main() {
    int commend, o, n; // 명령, 배열 원소, 테스트 케이스
    scanf("%d", &n);

    int j = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &commend);

        switch (commend) {
            case 1:
                scanf("%d", &o);
                arr[j] = o;
                j++;
                break;

            case 2:
                if (j <= 0) {
                    printf("-1\n");
                } else {
                    printf("%d\n", arr[j - 1]);
                    arr[j-1] = 0;
                    j--;
                }
                break;

            case 3:
                printf("%d\n", j);
                break;

            case 4:
                if (j == 0) {
                    printf("1\n");
                } else {
                    printf("0\n");
                }
                break;

            case 5:
                if (j <= 0) {
                    printf("-1\n");
                } else {
                    printf("%d\n", arr[j-1]);
                }
                break;
        }
    }

    return 0;
}