#include <stdio.h>    
int main()

{
	int num;
	
	//input
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	//process
	if(num == 0){
		
		printf("The %d number is ZERO!", num);
	}
	else if(num % 2 == 0){
		
		printf("The %d is an even number!", num);
	}else{
		
		printf("The %d is an odd number!", num);
	}
	
	
}
