void main(){
	int n,i,flag;
	printf("Enter a value of n=");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		flag=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
				printf("prime number: %d\n",i);
		
			
			
			}
		}
		
	
