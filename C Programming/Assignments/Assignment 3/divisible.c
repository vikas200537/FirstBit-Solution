void main(){
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	if(no%3==0 && no%5==0){
		printf("no is divisible by 3 & 5 both");
	}
	else if(no%3==0){
		printf("no is divisible by 3 only");
	}
	else if(no%5==0){
		printf("no is divisible by 5 only");
	}
	else{
		printf("you have enter invalid number");
	}
	
}