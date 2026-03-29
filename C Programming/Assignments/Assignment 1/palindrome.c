void main(){
	int num=1212,first,last;
	if(num>=100 && num<=5000){
		first=num/1000;
		last=num%10;
		if(first==last){
			printf("no is palindrome");
		}
		else{
			printf("no is not palindrome");
		}
		
		
	}
}