#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);

    int palindrome = 1;

    int j = strlen(word) - 1;

    for (int i = 0; i < strlen(word)/2; i++) {
        if (word[i] != word[j]) {
            palindrome = 0;
            break;
        } else {
            j--;
        }
    }
    
    if (palindrome) printf("1\n");
    else printf("0\n");


    return 0;
}