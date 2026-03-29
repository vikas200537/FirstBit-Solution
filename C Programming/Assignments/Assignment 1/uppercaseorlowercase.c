void main(){
	char ch='&';
	if(ch>='a' && ch<='z'){
		printf("lowercase letter");
	}
	else if(ch>='A' && ch<='Z'){
		printf("Uppercase letter");
	}
	else{
		printf("you are entering special symbol");
	}
}