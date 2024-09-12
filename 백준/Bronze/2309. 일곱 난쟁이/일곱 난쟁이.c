#include <stdio.h>

int main() {

    int arr[9];
    int sum = 0;
    int temp,fake1,fake2;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    } // 오름차순 정렬

    sum -= 100;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i] + arr[j] == sum) {
                fake1 = i;
                fake2 = j;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i != fake1 && i != fake2) {
            printf("%d\n", arr[i]);
        }
    }
    
    return 0;
}