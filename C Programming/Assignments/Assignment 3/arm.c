void main(){
	int no,sum=0,rem,cube,temp;
	printf("enter a number");
	scanf("%d",&no);
	temp=no;
	while(no>0){
		rem=no%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		no=no/10;
	}
	if(sum==temp){
		printf("no is armstrong",temp);
	}
	else{
		printf("no is not armstrong",temp);
	}
}