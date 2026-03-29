void main(){
	int no,original,remainder;
	int digit=0,sum=0;
	int i,power;
	printf("enter a number");
	scanf("%d",&no);
	original=no;
	while(original != 0){
		digit++;
		original=original/10;
	}
	original=no;
	while(original != 0){
		remainder=original%10;
		power=1;
		for(i=1;i <= digit;i++){
			power=power*remainder;
			
		}
		sum = sum + power;
		original=original/10;
	}
	if(sum==no){
		printf("armstrong number");
	}
	else{
		printf("not");
	}
}