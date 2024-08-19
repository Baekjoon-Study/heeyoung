
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} w;


int compare(const void *a, const void *b) {
    w num1 = *(w*)a;
    w num2 = *(w*)b;

    if (num1.y < num2.y)
        return -1;
    
    if (num1.y > num2.y) 
        return 1;

    else { // num1.y == num2.y
        if (num1.x < num2.x)
            return -1;
        if (num1.x > num2.x)
            return 1;
        else
            return 0;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    w arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(w), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}