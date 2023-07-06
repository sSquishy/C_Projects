#include <stdio.h>
#include <conio.h>

int x[3][3], i, j;

main()
{
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			x[i][j] = i + j * ( j + 1);
	for (i = 0; i < 3; i++)
		for (j = 0;  j < 3; j++)
			printf("%2d", x[i][j]);
			
	return 0;
}


