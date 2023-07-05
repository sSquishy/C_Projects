#include <stdio.h>    
int main()

{
	int savings = 1000;
	int deposit, balance, withdraw, balance1;
	
	
	
	printf("Welcome to the Company's' Bank \n");
	printf("Your current balance is %d \n \n", savings);
	
	
	
	//Process - deposit
	printf("Enter the Amount to Deposit: ");
	scanf("%d", &deposit);
	
	balance = savings + deposit;
	
	printf("You deposited a total amount of %d, Your curent total balance is %d \n \n \n", deposit, balance);
	
	
	//Process - Withdraw
	printf("Enter the Amount to Withdraw: ");
	scanf("%d", &withdraw);
	
	balance1 = balance - withdraw;
	
	printf("You deposited a total amount of %d, Your curent total balance is %d", withdraw, balance1);
	return 0;
}
