#include <stdio.h>
#include <stdlib.h>

int primeCheck(int x)								//Prime number Checker
{								
    int isPrime = 1, i;

    if(x == 0 || x ==  1)
        isPrime = 0;

    for(i = 2; i <= x/2; ++i){
        if(x % i == 0){
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

main(){

    system("cls");

    int x, y;											//Initializer

    do{
    	printf("\n\n");
    	printf("Type any number to check if it is a prime or Type number 0 to Exit the Program\n");
        printf ("Enter a number: ");					//Input
        scanf ("%d", &x);
    
        if(x == 0)
            break;

        y = primeCheck(x);

        if(y == 1)										//Output
            printf("%d is a prime number\n", x);
        else
            printf("%d is not a prime number\n", x);

    }while(x != 0);
    
    return 0;
}
