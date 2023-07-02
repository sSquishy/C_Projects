#include<stdio.h> 
#include<conio.h>

int x=5, y=9, z=7; 

int funct1( int x, int y, int z) 
{    z = x+y; 
     return z;
} 

int funct2(int *x, int *y, int *z)
{  *z = *x + *y; 
   return *z; 
} 

int funct3(int *x, int y, int *z) 
{ y = *x + *z; 
return y; 
} 

main() 
{  printf("%5d%5d%5d\n", x,y,z); 
   printf("%5d%5d%5d\n", x,y,funct1(x,y,z)); 
   y = funct2(&x,&y,&z); 
   z = funct1(x,y,z); 

   printf("%5d%5d%5d\n", x,y,z); 
   x = funct3(&y,z,&x); 
   z = funct1(x,y,z); 
   printf("%5d%5d%5d\n", x,y,z); 

   x = funct1(z,z,z); 
   y = funct2(&y,&x,&z); 
   z = funct3(&x,y,&z); 

   printf("%5d%5d%5d\n", x,y,z);    
   y = funct3(&y,x,&z); 
   x = funct1(x,y,z); 
   printf("%5d%5d%5d\n", z,y,x); 

   return 0; 

} 
