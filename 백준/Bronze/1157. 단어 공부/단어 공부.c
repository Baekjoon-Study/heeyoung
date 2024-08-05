#include <stdio.h>
#include <string.h>

char a[1000005];
int arr[26]; // 26칸짜리 배열

int main(void) {
    int max = 0;
    int size; 
    char ans;
    // max 값 0 으로 설정
    // int(정수형) 으로 size 선언
    // char(문자열) 으로 ans 선언

    scanf("%s", a);
    size = strlen(a); // size 는 입력한 문자열의 길이

    // 대소문자 구분 없애기

    for (int i = 0; i < size; i ++)
        if (a[i] >= 'a') arr[a[i] - 'a']++; 
        // 아스키값 이용, a[i] 가 'a' (=97) 보다 크면 소문자
        // arr[a[i]] - 'a' >> a - z를 0 - 25 으로 정리 후 1 증가
        else arr[a[i] - 'A']++;
        // A - Z 를 0 - 25 으로 정리 후 1 증가
        
    // for (int i = 0; i < 26; i++)
    //     printf("%d ", arr[i]);
    //     puts("");
        
    for (int i = 0; i < 26; i++)
        if (arr[i] == max) {
            ans = '?';
        }
        else if (arr[i] > max) {
            max = arr[i];
            ans = 'A' + i;
        }
    
    printf("%c\n", ans);

    return 0;
}
