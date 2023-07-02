#include <stdio.h>    
int main()

{ 
	int x[10]; //Initializer list
	int i, y, z, a;
	
	printf("Enter 10 value \n");
	for(i = 0; i < 10; i++)					
	{
		printf("Enter a value: ");
		scanf("%d", &x[i]);
	}
	
	printf("\n\n");
	
	printf("The original values are: \n");
	for(i = 0; i < 10; i++)
	{
		printf("x = %2d \n", x[i]);

	}
	
	printf("\n\n");							//Process
	do
	{
        y = 0;
			for(i = 0; i < 9; i++)
			{
				if(x[i] > x[i+1])
				{
					z = x[i];
					x[i] = x[i+1];
					x[i+1] = z;
					y = 1;

				}
			}

	}while(y);

	printf("The sorted values are: \n");		//outputs
	for(i = 0; i < 10; i++)
	{	
		printf("x = %2d \n", x[i]);
	}
	
	printf("\n\n");

	printf("The highest value is: %4d", x[9]);
    printf("\nThe lowest value is: %4d", x[0]);
	
	return 0;
}
