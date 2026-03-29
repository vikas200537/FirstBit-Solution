void main(){
	int no,i,sum=0;
	printf("enter a number");
	scanf("%d",&no);
	for(i=1;i<=no/2;i++){
		if(no%i==0){
			sum=sum+i;
//			printf("%d",sum);
		}
	}
		if(no==sum){
			printf("perfect number",sum);
		}
		else{
			printf("not",sum);
		}
	
}