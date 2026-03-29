void main()
{
	int year=2004;
	if((year%400==0)||(year % 4 == 0 && year % 100 != 0)){
		printf("leaf year");
		
	}
	else{
		printf("not a leaf year");
		
	}
}