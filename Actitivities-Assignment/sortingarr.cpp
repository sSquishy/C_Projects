#include <stdio.h>

int arr1[5], arr2[5], arr3[10];
int i, j, k, temp, noex;

main()
{
    //ARRAY #1

    for(i = 0; i < 5; i++)
	{
		printf("Enter values for first array: ");
		scanf("%d", &arr1[i]);
		arr3[i] = arr1[i];
	}

	printf("The original values in the first array are: ");
	for(i = 0; i < 5; i++)
	{
		printf("%3d", arr1[i]);
	}
	printf("\n\n");

    do
	{
        noex = 0;
			for(i = 0; i < 4; i++)
			{
				if(arr1[i] > arr1[i+1])
				{
					temp = arr1[i];
					arr1[i] = arr1[i+1];
					arr1[i+1] = temp;
					noex = 1;

				}
			}

	}while(noex);

	printf("The sorted values in the first array are: ");
	for(i = 0; i < 5; i++)
	{
		printf("%3d", arr1[i]);
	}
	printf("\n\n");

//--------------------------------------------------------------------

    //ARRAY #2

    k = 5;
    for(i = 0; i < 5; i++)
	{
		printf("Enter values for the second array: ");
		scanf("%d", &arr2[i]);
		arr3[k] = arr2[i];
		k++;
	}

    printf("The original values in the second array are: ");
	for(i = 0; i < 5; i++)
	{
		printf("%3d", arr2[i]);
	}
	printf("\n\n");

	do
	{
        noex = 0;
			for(i = 0; i < 4; i++)
			{
				if(arr2[i] > arr2[i+1])
				{
					temp = arr2[i];
					arr2[i] = arr2[i+1];
					arr2[i+1] = temp;
					noex = 1;

				}
			}

	}while(noex);

	printf("The sorted values in the second array are: ");
	for(i = 0; i < 5; i++)
	{
		printf("%3d", arr2[i]);
	}
	printf("\n\n");
//------------------------------------------------------------------

    //MERGED ARRAY

    printf("The original merged values of the arrays are: ");
	for(i = 0; i < 10; i++)
	{
		printf("%3d", arr3[i]);
	}
	printf("\n\n");

	do
	{
        noex = 0;
			for(i = 0; i < 9; i++)
			{
				if(arr3[i] > arr3[i+1])
				{
					temp = arr3[i];
					arr3[i] = arr3[i+1];
					arr3[i+1] = temp;
					noex = 1;

				}
			}

	}while(noex);

    printf("The merged and sorted values of the arrays are: ");
	for(i = 0; i < 10; i++)
	{
		printf("%3d", arr3[i]);
	}

    return 0;
}
