#include <stdio.h>
#include <string.h>

int main() {
    char word[1000001];
    scanf("%s", word);

    int arr[26] = {0,};
    int size = strlen(word); 

    for (int i = 0; i < size; i++) {
        if (word[i] >= 'a') {
            arr[word[i] - 'a'] += 1;
        }
        else {
            arr[word[i] - 'A'] += 1;
        }
    } 

    int max = 0;
    char res;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            res = i + 'A';
        }
        else if (arr[i] == max)
            res = '?';
    }
    
    printf("%c\n", res);

    return 0;
}
 


