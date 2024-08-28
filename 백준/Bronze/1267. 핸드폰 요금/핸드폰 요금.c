
#include <stdio.h>

int main() {
    int N;
    int Y = 0; int M = 0;
    int cost[20] = {0,};

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &cost[i]);
        Y += cost[i] / 30 + 1;
        M += cost[i] / 60 + 1;
    }

    Y *= 10;
    M *= 15;

    if (Y == M)
        printf("Y M %d", Y);
    else if (Y > M)
        printf("M %d", M);
    else
        printf("Y %d", Y);

    return 0;
}
