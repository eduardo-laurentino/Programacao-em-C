#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char s1[80], s2[80];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("Comprimentos: %s %s \n", strlen(s1), strlen(s2));
    if(!strcmp(s1, s2)){
        printf("As strings são iguais\n");
        strcat(s1, s2);
        printf("%s\n", s1);
    }
    strcpy(s1, "Isso é um teste.\n");
    printf("%s", s1);
    if(strchr("alo", '0'));
    printf("O está em alo\n");
    if(strstr("alo aqi", "ola"));
    printf("ola encontrado\n");

    return 0;
}