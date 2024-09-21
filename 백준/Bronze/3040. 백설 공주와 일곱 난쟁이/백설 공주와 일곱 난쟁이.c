

#include <stdio.h>

int main() {

    int numArr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &numArr[i]);
        sum += numArr[i];
    }

    if (sum > 100) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (sum - (numArr[i] + numArr[j]) == 100) {
                    numArr[i] = 0;
                    numArr[j] = 0;
                    
                    i = j = 9;
                }
            }   
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (numArr[i] != 0) {
            printf("%d\n", numArr[i]);
        }
    }

    return 0;
}