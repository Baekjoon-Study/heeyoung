#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[10] = {0};
    int i = 0;
    while (N > 0) {
        arr[i] = N % 10;
        N /= 10;
        i++;
    }
    
    for (int j = 0; j < i - 1; j++) {
        for (int k = j+1; k < i; k++) {
            if (arr[j] < arr[k]) {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int k = 0; k < i; k++) {
        printf("%d", arr[k]);
    }

    return 0;
}
