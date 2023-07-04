#include <stdio.h>
#include <stdlib.h>

void SortNum(int x, int y, int z){				//Sorting small to highest
    int s, m, l;

    if(x > y)
	{
        m = x;
        s = y; 
    }
	else
	{
        m = y;
        s = x;
    }
    if(m > z){
        l = m;
        if(s > z)
		{
            m = s;
            s = z;
        }else{
            m = z;
        }
    }
	else
	{
        l = z;
    }

    printf("\nThe Sorted Values are = {%d, %d, %d}", s, m, l);	//Output
}



main()
{
	system("cls");

    int x, y, z;											//Initializer

    printf("Enter No. 1: ");								//Inputs
    scanf("%d", &x);
    
    printf("Enter No. 2: ");
    scanf("%d", &y);         
    
	printf("Enter No. 3: ");
    scanf("%d", &z);
	
	printf("\nThe are Original Integers = {%d, %d, %d}", x, y, z);		//Output

    SortNum(x, y, z);
	return 0; 
}
