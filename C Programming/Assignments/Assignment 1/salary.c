void main(){
	int bsalary,da,ta,hra,tsalary;
	printf("salary is=");
	scanf("%d",&bsalary);
	if(bsalary<=5000){
		da=(bsalary*10)/100;
		ta=(bsalary*20)/100;
		hra=(bsalary*25)/100;
		tsalary=bsalary+da+ta+hra;
		printf("total salary is %d",tsalary);
	}
	else{
		da=(bsalary*15)/100;
		ta=(bsalary*25)/100;
		hra=(bsalary*30)/100;
		tsalary=bsalary+da+ta+hra;
		printf("total salary is %d",tsalary);
	}
}