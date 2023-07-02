#include <stdio.h>
#include <conio.h>

int x[5][5]; 													//Initializer list
int i, j, n, row, column, rowsum[5], columnsum[5];                  


main()
{
    for (i=0; i<5; i++)											//input
    {
        for (j=0; j<5; j++)
        {
            printf("enter a value for x[%d][%d]:  ",i,j);
			scanf("%d",&x[i][j]);
        }
    }
    
	printf("\n\nThe Table values are:\n\n"); 					//Process
																//Output
    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        printf("%5d", x[i][j]);
        printf("\n");
    }

    printf("\nThe sum in rows are:\n");
    for(row=0; row<5; row++)
    {
        rowsum[row]=0;
        for (column=0; column<5; column++)
        {
            rowsum[row] = rowsum[row] + x[row][column];
        }
        printf("  %d", rowsum[row]);
        printf("\n");
    }

    printf("\nThe sum in columns are:\n");
    for(column=0; column<5; column++)
    {
        columnsum[column]=0;
        for (row=0; row<5; row++)
        {
            columnsum[column] = columnsum[column] + x[row][column];
        }
        printf("  %d", columnsum[column]);
        printf("\n");
    }

    n=1;

    for(row = 0; row < 5; row++)
    {
        if (row != 4 && rowsum[row] != rowsum[row+1])
        {
            n=0;
        }
    }

    if (n == 0)
    
    printf("\nRow sums are not equal");

    else
    {
        printf("\nRow sums are equal");
    }

    n=1;

    for(column = 0; column < 5; column++)
    {
        if (column != 4 && columnsum[column] != columnsum[column+1])
        {
            n=0;
        }
    }

    if (n == 0)
    printf("\nColumn sums are not equal");

    else
    {
        printf("\nColumn sums are equal");
    }

    return 0;
} 

