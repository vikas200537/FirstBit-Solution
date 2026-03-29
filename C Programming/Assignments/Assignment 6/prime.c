void main(){
	int res=prime();
	if(res==1)
	printf("Prime");
	else
	printf("not prime");
}
int prime(){
	int no=25;
	for(int i=2;i<no;i++){
		if(no%i==0)
		return 0;
	}
	return 1;
}