#include <stdio.h>
int main (void){
    int z, x = 5;
    int y = z = ++x;
    //int y = z = x++;
    x++;
    printf("valor de y = %d\n", y);
    printf("valor de z = %d\n", z);
    printf("valor de x = %d\n", x);


    return 0;
}