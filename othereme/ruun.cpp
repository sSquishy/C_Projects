#include <stdio.h>

int x, y, z;

int trace1(int *x, int *y, int *z){
    *x = 5; //
    *z = *x + *y; //7
    return *z;
}

int trace2(int x, int y, int z){
    x = y + z;
    y = 7;
    z = x + y;
    printf("%3d%3d%3d\n", x, y, z); //2nd Print
    return z;
}

int main(){
    x = 1; y = 2; z = 3;

    printf("%3d%3d%3d\n", x, y, z); //1st Print
    y = trace1(&x, &y, &z);
    z = trace2(x, y, z);

    printf("%3d%3d%3d\n", x, y, z); //3rd Print
    x = trace1(&x, &y, &z); //5 2 7
    z = trace2(x, x, x); //5 7

    printf("%3d%3d%3d\n", x, y, z);
    x = trace1(&y, &z, &x);
    y = trace2(x, y, z);

    printf("%3d%3d%3d\n", x, y, z);

    return 0;
}
