void main(){
	float price,discountAmount,finalAmount,discount=0;
	printf("Enter a price");
	scanf("%f",&price);
	char cust;
	printf("enter a  cust type ");
	scanf(" %c",&cust);
	if(cust=='s'){
		if(price>5000){
		
		
		discount=0.20;
		
	   }
	    else{
	
		discount=0.10;
	}
	
}
	else if(cust!='s'){
	
	 if(price>6000){
		
		discount=0.15;
	}
	else {
		printf("there is no discount");
	}
}
discountAmount = price * discount;
    finalAmount = price - discountAmount;

    printf("Discount applied: %.0f%%\n", discount * 100);
    printf("Discount amount: %.2f\n", discountAmount);
    printf("Final amount to pay: %.2f\n", finalAmount);
}