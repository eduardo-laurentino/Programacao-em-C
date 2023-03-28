#include <stdio.h>

int main(void){
    int numero;
    int fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);

    while(numero > 1){
        fatorial *= numero;
        numero = numero - 1;
        //printf("%d\n", fatorial);
    }

printf("%d\n", fatorial);
    return 0;
}