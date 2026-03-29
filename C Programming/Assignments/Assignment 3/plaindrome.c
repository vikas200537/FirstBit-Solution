void main(){
	int no,rem,temp,rev=0;
	printf("Enter a number");
	scanf("%d",&no);
	
		 temp=no;
		while(no>0){
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
			
		}
	
	if(temp==rev){
		printf("No is palindrome");
	}
	else{
		printf("not a palindrome");
	}
}