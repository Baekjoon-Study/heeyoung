
#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    char *croatia[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    int count = 0;

    for (int i = 0; i < strlen(str); i++) { 

        int find = 0;

        for (int j = 0; j < 8; j++) {

            int len = strlen(croatia[j]);

            if (strncmp(&str[i],croatia[j],len) == 0) {
                count += 1;
                i += len - 1;
                find = 1;
                break;
            }
        }

        if (!find) {
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}

