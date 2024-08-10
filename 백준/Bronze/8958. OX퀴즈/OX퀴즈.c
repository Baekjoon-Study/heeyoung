

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char score[81];
        scanf("%s", score);
        int count = 0;
        int cnt = 0;
        int ans = 0;
        int length = strlen(score);
        for (int j = 0; j < length; j++) {
            if (score[j] == 'O') {
                count += 1;
                cnt += count;
            } else {
                ans += cnt;
                count = 0;
                cnt = 0;
            }
        }
        if (cnt != 0) {
            ans += cnt;
            printf("%d\n", ans);
        } else {
            printf("%d\n", ans);
        }
    }
}

