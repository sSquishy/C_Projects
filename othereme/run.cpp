#include <stdio.h>

int x, y, z;


int trace1(int *x, int *y, int *z)
{ 
	*x = 5;
	*z = *x + *y;
	return *z;	
}

int trace2(int x, int y, int z)
{
	x = y + z;
	y = 7;
	z = x + y;
	printf("%3d%3d%3d\n", x, y, z);
	return z;
}


int main()
{
	
	x = 1; y = 2; z = 3;
	
	printf("%3d%3d%3d\n", x, y, z);
	y = trace1(&x, &y, &z);
	z = trace2(x, y, z);
	
	printf("%3d%3d%3d\n", x, y, z);
	x = trace1(&x, &y, &z);
	z = trace2(x, x, x);
	
	printf("%3d%3d%3d\n", x, y, z);
	x = trace1(&x, &y, &z);
	y = trace2(x, y, z);
	
	printf("%3d%3d%3d\n", x, y, z);
	
	return 0;
	
}



