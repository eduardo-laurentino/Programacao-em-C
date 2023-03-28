#include <stdio.h>
#include <string.h>

void reverse(char *s){
    register int t;
    for(t = strlen(s)-1; t >= 0; t--){
        putchar(s[t]);
    }
    printf("\n");
}

int main(void){
    reverse("Eu gosto de C");

    return 0;
}