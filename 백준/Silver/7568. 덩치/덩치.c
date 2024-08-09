
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[50] = {0,};
    int y[50] = {0,};

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int j = 0; j < n; j++) {
        int count = 1;
        for (int k = 0; k < n; k++) {
            if (j == k) {
                continue;
            }
            if (x[j] < x[k] && y[j] < y[k]) {
                count += 1;
            }
            else {
                continue;
            }
        }
        printf("%d ", count);
    }
}