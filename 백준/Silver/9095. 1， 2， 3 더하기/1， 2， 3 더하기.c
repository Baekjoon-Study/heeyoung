
#include <stdio.h>

int main() {
    int T,N;
    scanf("%d", &T);

    int arr[12] = {0,1,2,4};

    for (int i=0; i<T; i++) {
        scanf("%d", &N);
        for (int j=4; j<=N; j++) {
            arr[j] = arr[j-3] + arr[j-2] + arr[j-1];
        }
    printf("%d\n", arr[N]);
    }
    return 0;
}