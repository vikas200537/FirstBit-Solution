#include<stdio.h>
void main()
{
	int a=10,b=30,c;
	c=a;
	a=b;
	b=c;
	printf("Value After Swapping %d %d",a,b);
}