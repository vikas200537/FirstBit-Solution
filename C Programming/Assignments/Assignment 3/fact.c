void main(){
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	int fact=1;
	for(int i=1;i<=no;i++){
		fact=fact*i;
		
	}
	printf("Factorial=%d",fact);
}