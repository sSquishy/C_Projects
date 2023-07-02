#include<stdio.h> 

#include<conio.h> 

 

func1(int x, int y, int z)
 {  x = 5; y = 2; z = 4; 
     x++; 
     y = x + z; 
     z = z + y; 
     printf("%3d%3d%3d\n", x,y,z); 
  } 

void func2 (int x, int y, int z) 
  { 
    x += 2; 
    y = x + y; 
    z = x + y; 
    printf("%3d%3d%3d\n", x,y,z); 
    func1(x,y,z); 
    func1(z,x,y); 
    printf("%3d%3d%3d\n", x,y,z); 
  } 
  
   main() 
  { //clrscr(); 
    int x,y,z; 
    x = 1; y = 2; z = 3; 
    printf("%3d%3d%3d\n", x,y,z); 
    func1(x,y,z); 
    func2(x,y,z); 
    func1(y,z,x); 
    func2(z,z,z); 
    printf("%3d%3d%3d\n", x,y,z);
    getch(); 
  } 
