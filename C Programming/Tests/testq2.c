//2. Write a program to print following series:
//1 + 11+ 111+ 1111+ ..... + n times 1

#include <stdio.h>

void main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("1");
        }

        if(i < n) {
            printf(" + ");
        }
    }

   
}