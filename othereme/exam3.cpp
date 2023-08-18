#include <stdio.h>

void blip(int n)
{
	if (n != 0)
	{
		blip(n-1);
		printf("%3d", n);
	}
}

void blap(int n)
{
	if (n != 0)
	{
		blip(n-1);
		printf("%3d\n", n);
		blap(n - 1);
	}
}

main()
{
	blap(4);
	
	return 0;
}
