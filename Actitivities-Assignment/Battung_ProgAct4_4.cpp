#include <stdio.h>    

int main()

{
	int tMin, burger; //Variable Declaration 
	
	printf("\t\t JEMIMAH'S HAMBURGER \n \n\n");
	printf("\t Hours \t\t Minutes \t Hamburgers \n");
	
	
	
	for(tMin = 2; tMin <= 58; tMin += 2) //Logic - Process of using loops - output
	{
		burger = tMin * 6;
		printf("\t\t\t  %3d  \t\t   %3d \t\n", tMin, burger);
	}
	
	for(tMin = 60; tMin <= 100; tMin += 2) 
	{
		
		burger = tMin * 6;
		
		printf("\t %3d \t\t  %3d \t\t   %3d \n", tMin/60, tMin, tMin*6 );
		
	}
	
	return 0;	
}
