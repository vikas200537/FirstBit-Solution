void main(){
	int i,flag=0,number;
	printf("enter a number");
	scanf("%d",&number);
	for(i=2;i<=number/2;i++){
		if(number%i==0){
			flag=1;
			break;
			
		}
		
}
		if(flag==0){
		printf("Number is prime");
	}
	    else{
		printf("Number is not prime");
	}
	
}