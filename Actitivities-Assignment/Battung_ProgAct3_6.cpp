#include <stdio.h>    
int main()

{
	int op;
	float num, numm, result;
	
	//input
	printf("Calculator \n\n");
	printf("Enter the 1st digit: ");
	scanf("%f", &num);
	
	printf("Enter the 2nd digit: ");
	scanf("%f", &numm);
	
	printf("\n");
	printf(" [1] + \n [2] - \n [3] / \n [4] * \n");
	printf("Enter operator: ");
	scanf("%d", &op);
	
	//process
	switch(op)
	{
		case 1:
		result = num + numm;
		printf("%.2f + %.2f = %.2f", num, numm, result);	
		break;
		
		case 2:
		result = num - numm;
		printf("%.2f - %.2f = %.2f", num, numm, result);	
		break;
		
		case 3:
		result = num / numm;
		printf("%.2f / %.2f = %.2f", num, numm, result);	
		break;
		
		case 4:
		result = num * numm;
		printf("%.2f * %.2f = %.2f", num, numm, result);	
		break;
	}
	
	return 0;
	
}


