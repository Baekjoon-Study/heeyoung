
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    
    return 0;
}

int BinarySearch(int left, int right, int key, int *arr) {
    int middle;

    while (left <= right) {
        middle = (left+right)/2;
        if (key > arr[middle])
            left = middle + 1;
        else if (key < arr[middle])
            right = middle - 1;
        else
            return 1;
    }
    return 0;
}

int main() {
    int N,M;
    int arrN[100001] = {0};
    int arrM[100001] = {0};
    int res = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arrN[i]);
    }
    qsort(arrN, N, sizeof(int), compare);

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &arrM[i]);
    }

    for (int i = 0; i < M; i++) {
        res = BinarySearch(0,N-1,arrM[i],arrN);
        printf("%d\n", res);
    }
    return 0;
}