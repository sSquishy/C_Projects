#include <stdio.h>


void func1(int *x, int y, int z)
	{
		*x++;
		y = *x + z;
		z = z + y;
		printf("%3d%3d%3d\n", *x, y,z);
	}
void func2(int x, int y, int *z)
	{
		x += 2;
		y = x + *z;
		*z = x + y;
		printf("%3d%3d%3d\n", x, y, *z);
		func1(&x, y, *z);
		printf("%3d%3d%3d\n", x, y, *z);
	}	
	
	
main()
	{
		int x, y, z;
		x = 2; y = 4; z = 6;
		func1(&y, z, x);
		func2(y, y, &y);
		printf("%3d%3d%3d\n", x, y,z);
		
				
	}
