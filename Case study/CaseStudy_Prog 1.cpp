#include<stdio.h>
#include<conio.h>
#include<process.h>


	int main()
	{
		FILE *fp;	
		 struct record
		 {	
		 	long unsigned int empNum;          	    	//Employee number
		 	char empFirstName[8];	 					//Employee First Name
		 	char empLastName[8];						//Employee Last Name
		 	char status;								//Employee Status Code
			char Code[10];	 	
	 		double hrswrk;								//Employee Number of HoursWork
	 		double deduction;							//Employee Pay Deduction
			double basicsalary;							//Employee Basic salary	Pay				
	 		double basicrate;							//Employee Basic rate Pay		
	 		double netpay;								//Employee Net pay
	 		double basicRate;							//Employee basicRate Pay
	 		double overtimehrs;							//Employee overtime hours
	 		double overtimerate;						//Employee overtime rate pay
			double overtimepay; 						//Employee overtimepay(whole)
							
			
		 };


	struct record myemployee;						
    
	fp = fopen("employee.txt", "a+");
	
	int i;
		
	
	if(fp == NULL)
	{	 
	printf("File cannot be created!");
	exit(1);

	};
	
	//clrscr();
	for (i = 1; i <= 1; i++)								//Input Display
    	{		 
		printf("\t\t\t\t\t Welcome to PUP Company \n\n");

		printf("\n  Please enter the following Inputs: \n\n");
		
		printf("\n\tEnter Employee's Number [10]: ");
		scanf("%lu", &myemployee.empNum);
	
		printf("\n\tEnter Employee's First Name [7]: ");
		scanf("%s", &myemployee.empFirstName);
		
		printf("\n\tEnter Employee's Last Name [7]: ");
		scanf("%s", &myemployee.empLastName);
		
		
		printf("\n\tEnter Status Code of the Employee [R] [C]: ");		
		scanf("%c", &myemployee.status);
		scanf("%c", &myemployee.status);	
		
		
		switch(myemployee.status)																				//Switch case for code R and C
        {
        case 'R':
           printf("\n\nTo continue to input data for Regular, Please type word 'Regular': ");					//Regular
		   scanf("%s", &myemployee.Code);					
           
           printf("\n\n  Input for Status Code : Regular");
           printf("\n\n\t\tEnter Employee Basic Salary [5]: ");
           scanf("%lf", &myemployee.basicsalary);
           
           printf("\n\t\tEnter Employee No. of Hourswork [3]: ");
           scanf("%lf", &myemployee.hrswrk);
           
           printf("\n\t\tEnter Employee Deduction [5]: ");
           scanf("%lf", &myemployee.deduction);
           
        	
           		if(myemployee.hrswrk <= 160)
           			{
           				
           				myemployee.netpay = myemployee.basicsalary - myemployee.deduction; 						//Netpay
           			
					   	/*//Testing purpose only 	
           				printf("\nnetpay = basicsalary - deduction                    || %.2lf = %.2lf - %.2lf ", myemployee.netpay, myemployee.basicsalary, myemployee.deduction);
           				*/
					}
           		else
           		{
           			myemployee.basicrate = myemployee.basicsalary / 160;										//rate			
					
					myemployee.overtimehrs = myemployee.hrswrk - 160;											//overtimehrs				
					myemployee.overtimerate = myemployee.basicrate + .5; 										//overtime rate				
					myemployee.overtimepay = myemployee.overtimehrs * myemployee.overtimerate;					//overtimepay
	 						 												
					myemployee.netpay = myemployee.basicsalary + myemployee.overtimepay - myemployee.deduction;	//netpay
				   	
				   	
				   	/*//Testing purpose only 
				   	printf("\nbasicrate     = basicsalary / 160                     || %.2lf = %.2lf / %.2lf", myemployee.basicrate, myemployee.basicsalary, myemployee.hrswrk);
				   	printf("\novertimehrs   = hrswrk - 160                          || %.2lf = %.2lf - 160", myemployee.overtimehrs, myemployee.hrswrk);
				   	printf("\novertimerate  = basicrate + 0.5                       || %.2lf = %.2lf + 0.5", myemployee.overtimerate, myemployee.basicrate);
				   	printf("\novertimepay   = overtimehrs * overtimerate            || %.2lf = %.2lf * %.2lf", myemployee.overtimepay, myemployee.overtimehrs, myemployee.overtimerate);
				   	printf("\nnetpay        = basicsalary + overtimepay - deduction || %.2lf = %.2lf + %.2lf - %.2lf", myemployee.netpay, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction);
				   	*/
				   }
           
            break;
        
        case 'C':
            printf("\n\nTo continue to input data for Regular, Please type the word 'Casual': ");				//Casual 
		    scanf("%s", &myemployee.Code);
            					
            printf("\n\n  Input for Status Code : Casual");
        	printf("\n\n\t\tEnter Employee Basic Rate [5]: ");
            scanf("%lf", &myemployee.basicrate);
            
            printf("\n\t\tEnter Employee No. of Hourswork [3]: ");
            scanf("%lf", &myemployee.hrswrk);
            
            printf("\n\t\tEnter Employee Deduction [5]: ");
            scanf("%lf", &myemployee.deduction);
            	
            	if(myemployee.hrswrk <= 160)
           			{
           				
           				myemployee.basicsalary = myemployee.basicrate * myemployee.hrswrk;						//basic salary 
						myemployee.netpay = myemployee.basicsalary - myemployee.deduction;						//netpay
						
						/*//Testing purpose only 
						printf("\nbasic salary = basic rate * hourswork               || %.2lf = %.2lf * %.2lf ", myemployee.basicsalary, myemployee.basicrate, myemployee.hrswrk);
           				printf("\nnetpay = basic rate - deduction                     || %.2lf = %.2lf - %.2lf ", myemployee.netpay, myemployee.basicsalary, myemployee.deduction);
						*/
					   }
           		else
           		{
           				myemployee.overtimehrs = myemployee.hrswrk - 160; 										//overtimehrs
						myemployee.overtimerate = myemployee.basicrate + .5;									//overtime rate
						myemployee.overtimepay = myemployee.overtimehrs * myemployee.overtimerate;				//overtime pay
						
						myemployee.basicsalary = myemployee.basicrate * 160;									//basic salary 
						myemployee.netpay = myemployee.basicsalary + myemployee.overtimepay - myemployee.deduction; //netpay
						
						/*
						printf("\nnovertimehrs = hrswrk - 160                    || %.2lf = %.2lf - 160 ", myemployee.overtimehrs, myemployee.hrswrk);
           				printf("\novertimerate = basicrate + .5                  || %.2lf = %.2lf +.5 ", myemployee.overtimerate, myemployee.basicrate);
           				printf("\novertimepay = overtimehrs * overtimerate       || %.2lf = %.2lf * %.2lf ", myemployee.overtimepay, myemployee.overtimehrs, myemployee.overtimerate);
           				
						printf("\n\nbasicsalary = basicrate * 160                  || %.2lf = %.2lf * 160 ", myemployee.basicsalary, myemployee.basicrate);
						printf("\nnetpay = basicpay + overtimepay - deduction    || %.2lf = %.2lf + %.2lf - %.2lf  ", myemployee.netpay, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction);
           				*/
           		}
           		
            break;
        default:
            break;
		}
}
		
		fprintf(fp,"\n\n\n\t\t\t\t\t      Welcome To PUP Companyyyyy\n\t\t\t\t\t\t       Payroll\n");			//for file
		
		fprintf(fp,"\n\n\t Employee \t\t Employee \t   Status \t Basic \t Overtime \t Deduction \t Net");
		fprintf(fp,"\n\t Number \t\t Name \t          \t Salary \t Pay \t\t Pay \t\t Pay\n");
		for (i = 1; i <= 1; i++)
				{
				if(myemployee.hrswrk <= 160)
           			{
           				if(myemployee.deduction == 0)
           				{
           					fprintf(fp,"\n\t %u \t %s %s \t %s \t %.2lf \t 00.00  \t 0.00   \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.netpay);	
						}
						else
						{
           					fprintf(fp,"\n\t %u \t %s %s \t %s \t %.2lf \t 00.00  \t %.2lf \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.deduction, myemployee.netpay);	
           				}
					}
           		else
           			{       
				   		if(myemployee.deduction == 0)
           				{    				
							fprintf(fp,"\n\t %u \t %s %s \t %s \t %.2lf \t %.2lf \t 00.00   \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction, myemployee.netpay);						
           				}
						else
						{
           					fprintf(fp,"\n\t %u \t %s %s \t %s \t %.2lf \t %.2lf \t %.2lf \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction, myemployee.netpay);					
						}
					}
 				}
		
		
		
		
		

	fclose(fp);
 	//clrscr();
		
	
	 fp = fopen("employee.txt", "r");																			// Check if file can be opened for reading
	 if(fp==NULL)
		{ 
		printf("File cannot be opened for reading!");
		exit(1);
		}
		
		printf("\n\nThe data from file: \n\n");		
		
		printf("\t\t\t\t\tWelcome To PUP Companyyyyy\n\t\t\t\t\t\t Payroll\n");
		
		printf("\n\n\t Employee \t Employee \t Status \t Basic \t\t Overtime \t Deduction \t Net");				//Reading the current input
		printf("\n\t Number \t Name \t        \t         Salary \t Pay \t\t Pay \t\t Pay\n");
		
		
			for (i = 1; i <= 1; i++)
				{
				if(myemployee.hrswrk <= 160)
           			{
           				if(myemployee.deduction == 0)
           				{
           					printf("\n\t %u \t %s %s \t %s \t %.2lf \t 00.00  \t 0.00   \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.netpay);	
						}
						else
						{
           				printf("\n\t %u \t %s %s \t %s \t %.2lf \t 00.00  \t %.2lf \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.deduction, myemployee.netpay);	
           				}
					}
           		else
           			{       
				   		if(myemployee.deduction == 0)
           				{    				
						printf("\n\t %u \t %s %s \t %s \t %.2lf \t %.2lf \t 00.00   \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction, myemployee.netpay);						
           				}
						else
						{
           				printf("\n\t %u \t %s %s \t %s \t %.2lf \t %.2lf \t %.2lf \t %.2lf", myemployee.empNum, myemployee.empFirstName, myemployee.empLastName, myemployee.Code, myemployee.basicsalary, myemployee.overtimepay, myemployee.deduction, myemployee.netpay);					
						}
					}
 				}
 				
 			
 		fclose(fp);
 		getch();

}
