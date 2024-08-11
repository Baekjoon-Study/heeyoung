#include <stdio.h>

int main() {
    int t,h,w,n; // 케이스, 층 수, 방 수, 몇 번째 손님
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        int ans_h = n % h;
        int ans_w = n / h + 1;

        if (ans_h == 0) {
            ans_h = h;
            ans_w -= 1;
        }

        printf("%d\n", (ans_h * 100) + ans_w);
        
    }
}