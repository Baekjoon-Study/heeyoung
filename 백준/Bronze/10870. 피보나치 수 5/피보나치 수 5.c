#include <stdio.h>

long long fib (int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main () {
    int a;
    scanf("%d", &a);
    printf("%d", fib(a));
    
    return 0;
}