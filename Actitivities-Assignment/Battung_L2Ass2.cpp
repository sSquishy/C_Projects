#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i, ans;      							//Initializer list
    
    printf("\t\t Base 2 \n");
    printf("Power \t\t\tResult \n");

    for(i = 0; i <= 10; i++){					//looping until the power of 10
        ans = pow(2, i);
        printf("%2d \t\t\t %2d\n", i, ans);		//Output
    }
    
    return 0;
}
