#include <stdio.h>
#include <stdlib.h>

int GetGCD( int x, int y)
{

    while (y != 0)								//A while loop will continue iterates till y is not equal to 0
    {
        if ( x > y) 
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }

    return x;
}

main()
{	
    system("cls");

    int x, y, GCD;															//Initializer

    do{
        printf ("\nEnter the first number: ");								//Inputs
        scanf ("%d", &x);
    
        if(x == 0)
            break;

        printf ("\nEnter the second number: ");
        scanf ("%d", &y);
        
        GCD = GetGCD(x, y); 												//Call the GetGCD() function

        printf ("The GCD of the two numbers %d and %d is %d \n\n", x, y, GCD);		//Output

    }while(x != 0);

    return 0;
}
