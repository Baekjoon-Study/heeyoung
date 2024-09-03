#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 10) N *= 10;

    int count = 0;
    int temp = N;

    while(1) {
        count += 1;
        temp = temp % 10 * 10 + (temp / 10 + temp % 10) % 10;
        
        if (temp == N) {
            break;
        }    
    }

    printf("%d\n", count);

    return 0;
}
