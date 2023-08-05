#include <stdio.h>    
int main()

{
  int number1, number2, sum;
    
    printf("Enter 1st integer: ");
    scanf("%d", &number1);
    
    printf("Enter 2nd integers: ");
    scanf("%d", &number2);

    // calculating sum
    sum = number1 * number2;      
    
    printf("%d", sum);
    return 0;
}
