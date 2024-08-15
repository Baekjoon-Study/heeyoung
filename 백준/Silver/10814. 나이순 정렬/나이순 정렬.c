
#include <stdio.h>
#include <string.h>

typedef struct p {
    int age;
    char name[101];
} w;
w member[100001]; 

int main() {
    int N;
    scanf("%d", &N); 
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s", &member[i].age, member[i].name);
    }
    for (int j = 1; j <= 200; j++) {
        for (int k = 0; k < N; k++) {
            if (j == member[k].age)
                printf("%d %s\n", member[k].age, member[k].name);
        }
    }
    return 0;
}