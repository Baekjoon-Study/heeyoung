#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    int Ga = a; int Gb = b;

    int r = Ga % Gb;

    // 최대공약수
    while (r != 0) {
        Ga = Gb;
        Gb = r;
        r = Ga % Gb;
    }
    printf("%d\n", Gb);
    
    // 최소공배수
    int LA,LB;

    if (LA < LB) {
        LB = LA;
        LA = b;
    } else {
        LA = a; LB = b;
    } // B 에 작은 값이 오게 하기

    while (LB % LA != 0) {
        LB += b;
    }
    printf("%d\n", LB);
    return 0;
}