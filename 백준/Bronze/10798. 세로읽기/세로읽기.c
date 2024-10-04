#include <stdio.h>
#include <string.h>

int main() {

    char arr[6][16];

    for (int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < strlen(arr[j])) {
                printf("%c", arr[j][i]);
            }
        }
    }
    return 0;
}

