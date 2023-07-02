#include <stdio.h>    

int main()

{
	int row, col; //Variables Declaration
	
	for(row = 1; row <= 5; row++) //Logic - Process of using loops - output
	{
		for(col = 1; col <= row; col++)
		{
			printf("*");			       
		}
		printf("\n");
	}


}
