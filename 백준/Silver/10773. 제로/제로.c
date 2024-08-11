#include <stdio.h>
#define stack_size 100001

int stack[stack_size];
int top = -1;

void push(int num) {
    top ++;
    stack[top] = num;
}

void pop() {
    stack[top] = 0;
    top --;
}

int main() {
    int k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            pop();
        } else {
            push(num);
        }
    }
    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }
    printf("%d\n", sum);
    return 0;
}