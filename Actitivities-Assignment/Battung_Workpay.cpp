#include <stdio.h>    
int main()

{
	int payrate, inpmon, inptue, inpwed, inpthu, inpfri, inpsat, hours, outsalary;
	
	
	//Inputs
	printf("Enter Employee's hourly pay rate: ");
	scanf("%d", &payrate);
	
	printf("\n");
	printf("Enter Employee's hourly taken per day \n");
	
	printf("Monday: ");
	scanf("%d", &inpmon);
	
	printf("Tuesday: ");
	scanf("%d", &inptue);
	
	printf("Wednesday: ");
	scanf("%d", &inpwed);
	
	printf("Thursday: ");
	scanf("%d", &inpthu);
	
	printf("Friday: ");
	scanf("%d", &inpfri);
	
	printf("Saturday: ");
	scanf("%d", &inpsat);
	
	//Calculation
	hours = inpmon + inptue + inpwed + inpthu + inpfri + inpsat;
	outsalary = payrate * hours; 
	
	printf("\n \n \n");
	printf("The total amout of hourly pay rate of the Employee this week is %d", outsalary);
	
	
	return 0;
}
