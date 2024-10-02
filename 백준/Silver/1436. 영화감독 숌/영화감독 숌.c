
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int N;
    int count = 0;
    long long res = 666;
    char buffer[100];

    scanf("%d", &N);


    while(1) {

        if (count == N) {
            break;
        }

        sprintf(buffer,"%lld",res);

        if (strstr(buffer, "666") != NULL) {
            count += 1;
        }
        res++;

    }

    printf("%lld\n", res - 1);

    return 0;
}