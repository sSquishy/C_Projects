#include <stdio.h>    
int main()

{ 
	int x, arrb[100], i; //initializer list
	
	printf("Enter positive decimal number: ");	//input
	scanf("%d", &x);
	
	printf("\nDecimal Number: %d", x);		
	
	while(x > 0)								//Solution
	{
		arrb[i] = x % 2; 
		x = x / 2; 
		i++;  
	}
	
	printf("\nBinary Value: ");
	i = i - 1;
	
	while(i >= 0)
	{
		printf("%d  ", arrb[i]);		//output
		i = i - 1; 
	}
    
    printf("\n\n");
	
	return 0;
}
