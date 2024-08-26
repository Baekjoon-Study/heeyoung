
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} coord;

int compare(const void *a, const void *b) {
    coord num1 = *(coord*)a;
    coord num2 = *(coord*)b;

    if (num1.x > num2.x) {
        return 1;
    }
    if (num1.x < num2.x) {
        return -1;
    }

    else { // num1.x == num2.x
        if (num1.y > num2.y)
            return 1;
        if (num1.y < num2.y)
            return -1;
        else 
            return 0;
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    coord arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(coord), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}
