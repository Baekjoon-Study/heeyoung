
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {

    int num;
    int arr[8];
    int count = 0;
    int total = 0;
    
    for (int i = 0; i < 7; i++) {
        scanf("%d", &num);
        
        if (num % 2 != 0) {
            arr[count++] = num;
            total += num;
        } 
    }
    
    if (count > 0) {
        qsort(arr,count,sizeof(int),compare);
        printf("%d\n%d\n", total, arr[0]);
    } else {
        printf("-1\n");
    }
    return 0;
}