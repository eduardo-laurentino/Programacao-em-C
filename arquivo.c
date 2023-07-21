#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE *fp;
    char ch;
    fp = fopen ("teste.txt", "r");
    ch = getc(fp);
    while (ch != EOF){
        putchar(ch);
        ch = getc(fp);
    }
    printf("\n");
    fclose(fp);
    return 0;
}