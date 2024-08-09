#include <stdio.h>

int main() {

    int dp[15][15] = {0, }; // 층과 호수를 나타내는 2차원 배열 선언
    for (int i=0; i<15; i++) {
        dp[0][i] = i; // 0층 i호 모두 채우기
    }
    for (int j = 1; j < 15 ; j++) {
        for (int k = 1; k < 15; k++) {
            dp[j][k] = dp[j-1][k] + dp[j][k-1];
        }
    }
    int T;
    scanf("%d", &T);

    int a,b;
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", dp[a][b]);
    }
    return 0;
}
