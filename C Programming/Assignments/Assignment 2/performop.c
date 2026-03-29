void main(){
	int a,b,c;
	char op;
	printf("enter a & b:");
	scanf("%d %d",&a,&b);
	printf("Enter operater:");
	scanf(" %c",&op);
	if(op=='+'){
		c=a+b;
		printf("addition is %d",c);
	}
	else if(op=='-'){
		c=a-b;
		printf("substraction is %d",c);
	}
	else if(op=='*'){
		c=a*b;
		printf("Multiplication is %d",c);
	}
	else if(op=='/'){
		c=a/b;
		printf("division is %d",c);
	}
	else if(op=='%'){
		c=a%b;
		printf("Moduler division is %d",c);
	}
	else{
		printf("You are entering invalid operater");
	}
}