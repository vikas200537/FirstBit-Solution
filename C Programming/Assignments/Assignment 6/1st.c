void main(){
	if(evenodd())
		printf("Even");
	else
	printf("odd");
	
}
int evenodd(){
	int no=21;
	if(no%2==0){
		return 1;
	}
	else{
		return 0;
	}
}