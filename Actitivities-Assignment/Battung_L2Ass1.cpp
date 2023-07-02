#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[100];
char rev[100];
int p;


main()
{
	system("cls");
	
	printf("Input a string: ");
	scanf("%s", &input);
	
	strcpy(rev, input);
	strrev(rev);
	
	if(stricmp(input, rev) == 0)
		p = 1;
	else
		p = 0;
		
	printf("\n\n", input);
		if(p == 1)
			printf(" '%s' This is a Palindrome", input);
		else
			printf(" '%s' This is not a Palindrome", input);
	
	
	return 0;
	
}
