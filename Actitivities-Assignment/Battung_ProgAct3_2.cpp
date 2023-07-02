#include <stdio.h>    
int main()

{
	int ME = 0, YOU = 0, THEY = 5, THEM = 7;
	
	//input
	printf("Enter an integer value for ME: ");
	scanf("%d", &ME);
	
	printf("Enter an integer value for YOU: ");
	scanf("%d", &YOU);
	
	//process
	if (ME < 2 && ME > 0) {
		
		ME = YOU;
		
		printf("The Value is %d", ME);
	}else if(ME == 5){
		
		YOU = THEY * THEM;
		
		printf("The Value is %d", YOU);
	}else if(ME ==7){
		
		YOU = YOU - 4 ;
		
		printf("The Value is %d", YOU);
	}else{
		
		printf("The Value is %d", YOU);
		
	}
	
	return 0;
}
