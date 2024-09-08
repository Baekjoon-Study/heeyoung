#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int BinarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    int middle;

    while (left <= right) {
        middle = (left+right) / 2;
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
    int n,m,key;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &key);
        printf("%d ", BinarySearch(arr, n, key));
    }
    
    return 0;
}