#include <stdio.h>
#include <string.h>
#define SIZE 51

int main() {
    int T, length;
    char arr[SIZE];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", arr);
        length = strlen(arr);
        int num1 = 0;
        int num2 = 0;
        int isVPS = 1;
        for (int j = 0; j < length; j++) {
            if (arr[j] == '(') {
                num1 += 1;
            } else if (arr[j] == ')') {
                num2 += 1;
            }
            if (num1 < num2) {
                isVPS = 0;
                break;
            }
        } if (isVPS && num1 == num2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}