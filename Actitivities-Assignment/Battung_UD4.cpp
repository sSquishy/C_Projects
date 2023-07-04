#include <stdio.h>
#include <stdlib.h>


int power(int x, int y){										//Computation //x is raised to 5th power

    if(y != 0){
        x = x * power(x, y-1);
    }
    else
        x = 1;

    return x;
}

main()
{
	system("cls");

    int x, y = 5, output;											//Initializer
    
    printf("Enter a number: ");										//Input
    scanf("%d", &x);
    
    output = power(x, y);
    
    printf("%d raised to %d power = %d", x, y, output);					//Output
    
    return 0;
}
