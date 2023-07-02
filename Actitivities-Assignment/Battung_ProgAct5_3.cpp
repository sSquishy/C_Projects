#include <stdio.h>    
int main()

{ 
	int arrA[10] = {1, 50, 100, 150, 200, 250, 300, 350, 400, 450}, arrB[5] = {50, 1, 100, 450, 200}, i, y, z; //initializer list
	
	z = 0; 												//checker
    for(i=0; i < 10 ;i++)
    {
        for(y = 0; y < 5; y++)
        {
            if(arrA[i] == arrB[y])
            {
              z++;
            }
        }
    }
    
    
    if(z == 5)														//Output
        printf("Numbers in Set B is a subset of Set A");
    else
        printf("Numbers in Set B is not a subset of Set A");

    
	return 0;
}
