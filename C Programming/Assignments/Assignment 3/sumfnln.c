void main(){
	int no,fn,ln,sum;
	printf("Enter a number");
	scanf("%d",&no);
	
	ln=no%10;
	fn=no;
	while(fn>=10){
		
		
		fn=fn/10;
		
		
	}
	sum=fn+ln;
	printf("%d",sum);
	
}