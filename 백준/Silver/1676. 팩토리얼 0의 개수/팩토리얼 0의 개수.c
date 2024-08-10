#include <stdio.h>

int main() {
    int N;
    int cnt = 0;

    scanf("%d", &N);

    cnt += N / 5;
    cnt += N / 25;
    cnt += N / 125;

    printf("%d\n", cnt);

}