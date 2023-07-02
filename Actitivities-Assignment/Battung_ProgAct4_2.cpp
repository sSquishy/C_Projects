#include <stdio.h>    

int main()

{
	unsigned num, x, fact = 1;  //Variables Declaration - Initiallizing "fact" to value of 1 in case of 0 input (factorial states that 0! = 1)
	
	printf("Enter a number to find factorial: "); //Input - Read input from the User
	scanf("%d", &num);


	for(x = 1; x <= num; x++)      //Logic - Process of using loops - output
	{
		fact = fact * x;
	}
	
	printf("Factorial of  %d is %d", num, fact); 
	
	
	return 0;
}
