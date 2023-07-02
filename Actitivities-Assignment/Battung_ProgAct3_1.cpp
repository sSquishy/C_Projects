#include <stdio.h>    
int main()

{
	int userAge; 
	
	//input
	printf("Enter your Age: ");
	scanf("%d", &userAge);
	
	//process
	if (userAge >= 16) {
		
		printf("You're old enough to drive a vehicle");
		
	}else{
		userAge = 16 - userAge; 
		
		printf("You must wait %d years to drive legally", userAge);
	}
	
	return 0;
}
