

#include <stdio.h>

int main()
{
    int c,n,cnt;
    double avg;

    scanf("%d\n", &c);

    for (int i = 0; i < c; i++) {
        cnt = 0;
        avg = 0.0;
        scanf("%d", &n);
        int score[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &score[j]);
            avg += score[j];
        }
        avg /= n;

        for (int k = 0; k < n; k++){
            if (score[k] > avg) {
                cnt++;
            }
        }
        printf("%.3f%%\n", 100*(double)cnt/n);
    }
    return 0;
}