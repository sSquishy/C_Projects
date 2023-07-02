#include <stdio.h>    

int main()

{
	int input, x; //Variables Declaration 
	
	printf("Enter any positive number: "); //Input - Read input from the User
	scanf("%d", &input);


	for(x = 1; x <= input; x++)  //Logic - Process of using loops - output
	{
		if(input % x == 0)
		printf("% d, ", x);
	}
	
	
	return 0;
}
