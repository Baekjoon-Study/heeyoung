#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);

    int count[10001] = {0,};

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        count[num] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < count[i]; j++) {
            printf("%d\n", i);
        }
    }

    
    return 0;
}