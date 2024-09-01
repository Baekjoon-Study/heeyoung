#include <stdio.h>

int main() {
    int N,B,C;
    scanf("%d", &N);

    int arr[1000001];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &B, &C);

    long long sub;
    long long total = 0;

    for (int i = 0; i < N; i++) {
        total += 1;
        if (arr[i] > B) {
            sub = (arr[i]-B+C-1) / C;
            total += sub;
        } else {
            continue;
        }
    }

    printf("%lld\n", total);
    
    return 0;
}