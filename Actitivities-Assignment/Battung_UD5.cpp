#include <stdio.h>
#include <stdlib.h>

int i, j;

void EXCHANGE(int x[3][3]){

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%4d", x[j][i]);
        printf("\n");
    }
}


main()
{
	system("cls");

    int x[3][3];
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {   printf("Enter Value [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    

    printf("\n\n Original Array Values\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%4d", x[i][j]);
        printf("\n");
    }

    printf("\n Changed Array Values\n");
    

    EXCHANGE(x);

    return 0;
    
    
}
