#include <stdio.h>

int find_max(int num1, int num2, int num3) {
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    return max;
}

int find_triangle(int num1, int num2, int num3) {

    int max = find_max(num1, num2, num3);

    if (max == num1 && (num2+num3) <= max ||
        max == num2 && (num1+num3) <= max ||
        max == num3 && (num1+num2) <= max) return 0;
    else return 1;
}

int main() {

    while(1) {

        int a,b,c;

        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c ==0) break;
        
        if (find_triangle(a,b,c) == 0) printf("Invalid\n");
        else {

            if (a == b && b == c && a == c) printf("Equilateral\n");
            else if (a == b || b == c || a == c) printf("Isosceles\n");
            else printf("Scalene\n");

        }

    }

    return 0;
}