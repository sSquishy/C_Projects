#include <stdio.h>    
int main()

{
	float wHrs, wOverpay, wRate, tPay;
	
	//input
	printf("This is a work payable \n");
	printf("Enter how many hours worked:");
	scanf("%f", &wHrs);
	
	printf("Enter hourly rate: PHP ");
	scanf("%f", &wRate);
	
	//process
	if(wHrs > 40) {
		
		wOverpay = (wHrs - 40) * ((wRate / 2) + wRate);
		tPay = (40 * wRate) + wOverpay;   
		
		printf("Your total wage is: %.2f", tPay);
	}else{
		tPay = wRate * wHrs;
		
		printf("Your total wage is: %.2f", tPay);
	}
	
	return 0;
	
}
