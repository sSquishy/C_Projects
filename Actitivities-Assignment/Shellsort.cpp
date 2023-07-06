#include <stdio.h>

int x[10];
int i, temp, gap, noex;

main()
{
	for(i = 0; i < 10; i++)
	{
		printf("Enter a value: ");
		scanf("%d", &x[i]);
		
	}
	
	printf("The original values are: ");
	for(i = 0; i < 10; i++)
	{
		printf("%4d ", x[i]);
		
	}
	
	printf("\n\n");
	
	gap = 10/2;
	
	while(gap != 0)
	{
		do
		{
			noex = 0;
			for(i = 0; i < 10-gap; i++)
			{
				if(x[i] > x[i+gap])
				{
					temp = x[i];
					x[i] = x[i+gap];
					x[i+gap] = temp;
					noex = 1;
				}
			}
		}while(noex);
		
		gap = gap/2;
	}
	
	printf("The sorted values are: ");
	for(i = 0; i < 10; i++)
	{
		printf("%4d ", x[i]);
		
	}
	
	
	return 0;
}
