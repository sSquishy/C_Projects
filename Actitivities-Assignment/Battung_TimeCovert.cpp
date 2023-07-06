#include <stdio.h>    
int main()

{
	float inputHrs, outputMins;
	int cons = 60;
	int inputMins, outputHrs, outputHR;
	
	
	// hour/s input
	printf("Enter number of hour/s: ");
	scanf("%f", &inputHrs);
	
	outputMins = inputHrs * cons;                      //Calculating Hour/s to Minute/s
	
	printf("%.2f hour/s is %0.f minute/s \n \n", inputHrs, outputMins);
	
	
	//Minute/s input
	printf("Enter number of minute/s: ");
	scanf("%d", &inputMins);
	
	
	outputHrs = inputMins / cons;                      //Calculating Minute/s to Hour/s
	outputHR = inputMins % cons;
	
	printf("%d Min/s is %d hour/s and %d minune/s", inputMins, outputHrs, outputHR); 
	
	return 0;	
}
