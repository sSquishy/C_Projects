#include <stdio.h>    

int main()
{ 
	int arrA[5], arrB[5], arrC[10], i, y, z, a, b; //Initializer list

	
	printf("Enter First 5 value for set 1 \n\n");              //Array 1 //input
	
		for(i = 0; i < 5; i++)
	{
		printf("Enter values: ");
		scanf("%d", &arrA[i]);
		arrC[i] = arrA[i];
	}
	
	printf("\nValues: ");
	for(i = 0; i < 5; i++)
	{
		printf("%2d  ", arrA[i]);
	}
	printf("\n");
	 
	do
	{
        a = 0;
			for(i = 0; i < 4; i++)
			{
				if(arrA[i] > arrA[i+1])
				{
					b = arrA[i];
					arrA[i] = arrA[i+1];
					arrA[i+1] = b;
					a = 1;

				}
			}

	}while(a);

	printf("The sorted values in the first array are: "); //output
	for(i = 0; i < 5; i++)
	{
		printf("%2d  ", arrA[i]);
	}
	printf("\n\n");

///////////////////////////////////////////////////////

	z = 5;
	printf("Enter another set of 5 value for set 2 \n");              //Array 2 // input
	
		for(i = 0; i < 5; i++)
	{
		printf("Enter values: ");
		scanf("%d", &arrB[i]);
		arrC[z] = arrB[i];
		z++;
	}
	
	printf("\nValues: ");
	for(i = 0; i < 5; i++)
	{
		printf("%2d  ", arrB[i]);
	}
	printf("\n");
	 
	do
	{
        a = 0;
			for(i = 0; i < 4; i++)
			{
				if(arrB[i] > arrB[i+1])
				{
					b = arrB[i];
					arrB[i] = arrB[i+1];
					arrB[i+1] = b;
					a = 1;

				}
			}

	}while(a);

	printf("The sorted values in the 2nd array are: "); //output
	for(i = 0; i < 5; i++)
	{
		printf("%2d  ", arrB[i]);
	}
	printf("\n\n");

//////////////////////////////////////////////////////////////

	
	printf("The original merged values of the 2 arrays are: ");	//Merged outputs //loops //outputs
	for(i = 0; i < 10; i++)
	{
		printf("%3d", arrC[i]);
	}
	printf("\n");

	do
	{
        a = 0;
			for(i = 0; i < 9; i++)
			{
				if(arrC[i] > arrC[i+1])
				{
					b = arrC[i];
					arrC[i] = arrC[i+1];
					arrC[i+1] = b;
					a = 1;

				}
			}

	}while(a);

    printf("The merged and sorted values of the 2 arrays are: ");
	for(i = 0; i < 10; i++)
	{
		printf("%3d", arrC[i]);
	}
	
	printf("\n\n\n\n");
	return 0;
}
