void main()
{
	int no=123345,sum=0,r;
	while(no>0){
		r=no%10;
		sum=sum+r;
		no=no/10;
			
	}
	printf("%d",sum);
}