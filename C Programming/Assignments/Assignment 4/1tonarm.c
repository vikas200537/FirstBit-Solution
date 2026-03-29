void main(){
	int n,num,digit,sum,i;
	printf("Enter a value of n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		num=i;
		sum=0;
	
	while(num!=0){
		digit=num%10;
		sum=sum+digit*digit*digit;
		num=num/10;
	}

	if(sum==i){
		printf("\n %d",i);
	}
	}
}