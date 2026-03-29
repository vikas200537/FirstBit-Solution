void main(){
	int no,rem,sum=0,temp;
	printf("Enter a number");
	scanf("%d",&no);
	temp=no;
	while(no>0){
		rem=no%10;
		int fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
			
		}
		sum=sum+fact;
		no=no/10;
		
	}
	if(temp==sum){
		printf("Strong number",temp);
		
	}else{
		printf("not a strong number",temp);
	}
}