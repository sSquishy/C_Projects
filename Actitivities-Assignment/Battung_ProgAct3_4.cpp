#include <stdio.h>    
int main()

{
	int year; 
	
	//input	
	printf("Leap year checker \n");
	printf("Enter a year: ");
	scanf("%d", &year);
	
	//process
	if(year %4 == 0){
		printf("%d is a leap year", year);
	}else{
		printf("%d is not a leap year", year);
	}	
}
