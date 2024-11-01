#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1001

int main() {

    char str1[SIZE],str2[SIZE];

    scanf("%s",str1);
    scanf("%s",str2);

    int str1_count[26] = {0,};
    int str2_count[26] = {0,};

    int count = 0;

    for (int i=0; i<strlen(str1); i++) {
        str1_count[(int)str1[i]-97]++;
    }

    for (int i=0; i<strlen(str2); i++) {
        str2_count[(int)str2[i]-97]++;
    }

    for (int i=0; i<26; i++) {
        count += abs(str1_count[i] - str2_count[i]);
    }

    printf("%d\n",count);

    return 0;
}