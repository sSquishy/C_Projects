#include <stdio.h>
#include <conio.h>
int i, j;
main()



{
	for (i = 1; i<=5; i+= 2)
	{
		for (j = 1; j <= i; j++)
		printf("*");
		printf("   ");
	}
	
	return 0;
}
