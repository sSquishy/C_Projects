#include <stdio.h>    
int main()

{
	float wHrs = 0, wOverpay = 0, tPay = 0, wRate = 0;
	
	//input
	printf("This is a work payable \n");
	printf("Enter how many hours worked:");
	scanf("%d", &wHrs);
	
	printf("Enter hourly rate: PHP ");
	scanf("%d", &wRate);


	if(wHrs > 40) {
		
		wOverpay = ((wRate / 2) + wRate) * (wHrs - 40);
		tPay = (40 * wRate) + wOverpay;
		
		printf("Your total wage is: PHP %.2f", tPay);
		
	}else{
		tPay = wHrs * wRate; 
		
		printf("Your total wage is: PHP %.2f", tPay);

	}
		
}
