#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[10] = {0,};

    while (N > 0) {
        arr[N % 10] += 1;
        N /= 10;
    }

    int temp = (arr[6] + arr[9] + 1) / 2;

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9)
            continue;
        if (arr[i] >= temp) 
            temp = arr[i];
    }
    
    if (temp == 0)
        temp = 1;
    
    printf("%d\n", temp);

    return 0;
}