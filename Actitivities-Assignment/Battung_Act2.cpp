#include<stdio.h>


int i,j,n=5;							//Initializer list
int x[5][5];

main()
{
     // Integer Input
     for (i=0; i<n; i++)											
    {
        for (j=0; j<n; j++)
        {
            printf("enter a value for x[%d][%d]:  ",i,j);
			scanf("%d",&x[i][j]);
        }
    }
     
    // Print input in table order
     printf("\nThe array values are\n\n");
         for (i=0; i<n; i++)
         { 
		 	for (j=0; j<n; j++)
         	printf("%5d", x[i][j]);
         	printf("\n");
         }
         
    for(i=0; i<n; i++)
        {
			for (j=0;j<n;j++)
        	if (x[i][j] <=0)
        	x[i][j] =0;
    }
        
         printf("\nThe changed array values are\n\n");
         for (i=0; i<n; i++)
         { 
		 	for (j=0; j<n; j++)
         	
			printf("%5d", x[i][j]);
         	printf("\n");
         }
        
}
