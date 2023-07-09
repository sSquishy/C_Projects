#include<stdio.h>#include<conio.h>
// ipg April 10, 2022
int x[3][3];
int i, j,k,m,temp;

main(){  

//input elements in the 3x3 array
	for (i=0;i<3;i++)
	for(j=0;j<3;j++)
	{printf("enter a value for x[%d][%d]:  ",i,j);
	scanf("%d",&x[i][j]);}
	
	//print the elements
	printf("\n\nThe Table values are:\n\n");
	for (i=0;i<3;i++){
	for(j=0;j<3;j++)
	printf("%5d", x[i][j]);
	printf("\n");}
	
	//sorting 2-dimk=0;m=0;
	while (k<3)
	{ m=0;
	while (m <3){
	for (i=0;i<3;i++)
	for(j=0;j<3;j++)
	if (x[k][m]< x[i][j])
	
	{ temp = x[k][m];
	x[k][m] = x[i][j];
	x[i][j] = temp;
	}m++;} 
	k++;}
	//print the sorted table of elements
	
printf("\n\nThe Table values are:\n\n");
for (i=0;i<3;i++){
for(j=0;j<3;j++)
printf("%5d", x[i][j]);
printf("\n");}

return 0;
}
