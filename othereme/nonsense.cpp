#include <stdio.h>

int x, y, z;

void func1(int x, int y, int z)
	{
		x++;
		y = x + z;
		z = z + y;
		printf("%3d%3d%3d\n", x, y,z);
	}
void func2(int x, int y, int z)
	{
		x += 2;
		y = x + z;
		z = x + y;
		printf("%3d%3d%3d\n", x, y,z);
		func1(x,y,z);
		printf("%3d%3d%3d\n", x, y,z);
	}	
	
	
	main()
	{
		int x, y, z;
		x= 1; y = 3; z = 5;
		func1(y,z,x);
		func2(z,z,z);
		printf("%3d%3d%3d\n", x, y, z);
	}
