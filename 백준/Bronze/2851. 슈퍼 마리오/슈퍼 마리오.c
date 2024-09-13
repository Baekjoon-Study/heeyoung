
#include <stdio.h>

int main() {
    int mushroomArr[10];
    int sum1 = 0, sum2 = 0;
    int a,b;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &mushroomArr[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum1 += mushroomArr[i];

        if (sum1 >= 100) {
            sum2 = sum1 - mushroomArr[i];
            break;
        }
    }

    a = 100 - sum2;
    b = sum1 - 100;

    if (a < b) 
        printf("%d\n", sum2);
    else 
        printf("%d\n", sum1);

    return 0;
}

