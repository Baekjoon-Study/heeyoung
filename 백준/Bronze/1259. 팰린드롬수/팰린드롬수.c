
#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char num[100000] = {};
        scanf("%s", num);

        if (num[0] == '0') {
            break;
        }

        int res = 1;
        int length = strlen(num);

        for (int i = 0; i < length/2; i++) {

            if (num[i] != num[length - i - 1]) {
                res = 0;
                break;
            }
        }
        if (res == 1) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}


