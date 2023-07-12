#include <stdio.h>
#include <conio.h>

int main(){
    int i, p, q, ar1[10], ar2[10];
    int sum = 0;

    printf("Enter a number of instance (1-7): ");
    scanf("%d", &p);

    printf("\nEnter 1 digit per element for 1st instance \n");
    for(i=0; i<p; i++){ 
        scanf("\n%d",&ar1[i]);
    }

    printf("\nEnter another number of instance (1-7): ");
    scanf("\n%d", &q);

    printf("\n\nEnter 1 digit per element for 2nd instance \n");
    for(i=0; i<q; i++){ 
        scanf("\n\t\t%d",&ar2[i]);
    }
    
    printf("The 1st whole number is: ");
    for(i=0; i<p; i++){
    printf("%d", ar1[i]);
    }
    printf("\n");

    printf("The 2nd whole number is: ");
    for(i=0; i<q; i++){ 
    printf("%d", ar2[i]);
    }
    printf("\n");

    printf("The sum of the two whole number is: ");
    sum = ar1[i] + ar2[i];
    printf("%d", sum);

    getch();
}
