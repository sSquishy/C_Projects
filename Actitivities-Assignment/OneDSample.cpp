#include<stdio.h>#include<conio.h>

int x[5][5];
int i, j,k,m,temp;

main(){  

//input elements in the 3x3 array
	for (i=0;i<5;i++)
	for(j=0;j<5;j++)
	{printf("enter a value for x[%d][%d]:  ",i,j);
	scanf("%d",&x[i][j]);}
	
	//print the elements
	printf("\n\nThe Table values are:\n\n");
	for (i=0;i<5;i++){
	for(j=0;j<5;j++)
	printf("%5d ", x[i][j]);
	printf("\n");}
	
}

