
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int dp[10][2]; // i = 1 - 8 까지 존재    
    
    for (int i = 1; i < 10; i++) {
        dp[i][0] = 1; // n = 1 일 때 계단 수는 9개
    }

    while (n > 1) {
        dp[0][1] = dp[1][0];
        for (int i = 1; i < 9; i++) {
            dp[i][1] = (dp[i-1][0] + dp[i+1][0]) % 1000000000;
        }
        dp[9][1] = dp[8][0];

        for (int i = 0; i < 10; i++) {
            dp[i][0] = dp[i][1];
        }
        n -= 1;
    }

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans = (ans + dp[i][0]) % 1000000000;
    }

    printf("%d\n", ans);

    return 0;
}