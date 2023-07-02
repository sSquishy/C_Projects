#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

	char input[50], c;							//Initializer
	char password[50] = "password";
	int count = 0, i;

main()
{
	
	do{
       i = 0;
       printf("\nEnter Password : ");			//Input
       
       											//13 is ASCII value of Enter key 
        while((c = getch()) != 13){
          										//if the user deletes the typed password it will reset and overide the first input
            if(i < 0)
                i = 0;
            									//if the user inputs a BACKSPACE it delete and overides the first input
            if(c == 8){
                putch('\b');
                putch(NULL);
                putch('\b');
                i--;
            continue;
            }
            input[i++] = c;
            putch('*');
        }

        input[i] = '\0';						//converts entered characters to string

        if(strcmp(input, password) == 0){				//Output
            printf("\nWelcome to PUP Quezon City");
            break;
        }
        else
    		printf("\nWrong Password \n\n");
            count++;

   }while(count < 3);
  
    if(count == 3)
        printf("\nIntruder Alert!");
	
	
	
}


