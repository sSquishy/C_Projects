#include<stdio.h>

int x[10];													//Initializer list
int i,j,k,s;

main()
{
    //input
    for(i=0; i<10; i++)
	{
		printf("Enter a values: ");
		scanf("%d", &x[i]);
	}

	//printing of array
	printf("The list contains: ");
		for(i=0; i<10; i++)
			printf("%4d", x[i]);

    //input searched
	printf("\nEnter number to be searched: ");
	scanf("%d", &s);

    //checks the occurrences of searched number
	k = 0;
	for(i=0; i<10; i++)
        if(x[i] == s)
            k++;

    //prints the result
    printf("\nThere are %d occurrences of the number %d", k,s);

    return 0;
}
