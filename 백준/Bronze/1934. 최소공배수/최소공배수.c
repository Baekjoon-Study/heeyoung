#include <stdio.h>

int gcd(int a, int b, int r) {
    
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    int T,A,B,R;
    int temp;
    int GCD,LCM;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);

        if (A < B) {
            temp = A;
            A = B;
            B = temp;
        }

        R = A % B;

        GCD = gcd(A,B,R);

        LCM = (A * B) / GCD;

        printf("%d\n", LCM);
    }

    return 0;

}