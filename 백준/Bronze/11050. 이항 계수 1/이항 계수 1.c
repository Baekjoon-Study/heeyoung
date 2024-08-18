#include <stdio.h>

int main() {
    int n,k;
    scanf("%d %d", &n, &k);

    int N = 1;
    int K = 1;
    int NK = 1;
    
    for (int i = 1; i <= n; i++) {
        N *= i;
    }
    for (int i = 1; i <= k; i++) {
        K *= i;
    }

    for (int i = 1; i <= (n-k); i++) {
        NK *= i;
    }

    int res = N / (K * NK);
    printf("%d\n", res);
    return 0;
}