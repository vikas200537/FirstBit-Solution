void main()
{
	int year=2004;
	if((year%400==0)||(year % 4 == 0 && year % 100 != 0)){
		printf("leap year");
		
	}
	else{
		printf("not a leap year");
		
	}
}