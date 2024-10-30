#include <stdio.h>

int main() {
    
    int num;
    int fib2 = 0;
    int fib1 = 1;
    int res = 0;

    scanf("%d", &num);
    
    for (int i = 0; i <= num; i++) {
        if (i==0 || i==1) {
            if (i==0) res = 0;
            else res = 1; 
        }
        else {
            res = fib2 + fib1;
            fib2 = fib1;
            fib1 = res;
        }
    }

    printf("%d\n", res);


    return 0;
}