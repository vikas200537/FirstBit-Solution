//1. Write a program to count number of words in a string.

#include <stdio.h>

void main() {
    char str[100];
    int i, words = 1;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }

    printf("Number of words = %d", words);

 
}