#include <stdio.h>

int main(void){
    int numero, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    int aux = numero;
    while(numero > 1){
        cont+=1;
        numero /= cont;
    }
    printf("O número que gera o fatorial %d é %d\n", aux, cont);
    return 0;
}