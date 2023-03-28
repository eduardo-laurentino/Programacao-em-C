#include <stdio.h>

int main(void){
    float x = 20.5;
    float *p;
    float **q;
    p = &x;
    q = &p;
    //y = *p;
    printf("%.2f\n", **q);
    return 0;
}