void main(){
	int marks;
	printf("Enter Marks");
	scanf("%d",&marks);
	if(marks>=75){
		printf("Distinction");
	}
	else if(marks>=65&&marks<75){
		printf("First Class");
	}
	else if(marks>=55&&marks<65){
		printf("Second class");
	}
	else if(marks>40){
		printf("pass class");
	}
	else{
		printf("Fail");
	}
}