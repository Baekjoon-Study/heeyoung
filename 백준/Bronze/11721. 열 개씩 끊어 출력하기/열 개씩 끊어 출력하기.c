#include<stdio.h>
#include<string.h>

int main()
{
    
    char arr[101];
    scanf("%s",&arr);
    
    for(int i=0;i<strlen(arr);i++){
            printf("%c",arr[i]);
    if(i%10==9 && i!=0)
    {printf("\n");}
    }
      
    return 0;
}