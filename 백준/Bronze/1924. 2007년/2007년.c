#include <stdio.h>

int main() {

    int x,y;
    scanf("%d %d", &x, &y);

    char *arr[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

    int pre = 0;

    for (int i = 1; i < x; i++) {

        if (i == 2) {
            pre = (pre + 28) % 7;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            pre = (pre + 30) % 7;
        }
        else {
           pre = (pre + 31) % 7;
        }
    }

    int target = (pre + y - 1) % 7;

    printf("%s\n", arr[target]);
    
    return 0;
}