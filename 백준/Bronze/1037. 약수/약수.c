#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int min = 1000001;
    int max = 0;

    int arrN[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arrN[i]);

        if (min > arrN[i]) {
            min = arrN[i];
        }

        if (max < arrN[i]) {
            max = arrN[i];
        }
        
    }

    printf("%d\n", min * max);

    return 0;
}