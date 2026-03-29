#include <string.h>
void main(){

char str1[6]="shivam";
char str2[]="chavan";
printf("before concat %s",str1);
strcat(str1,str2);
printf("\nafter concat %s ",str1);
}