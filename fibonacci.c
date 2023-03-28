#include <stdio.h>

int main(void){
    int numero, fib1 = 0, fib2 = 1, fib3, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if(numero < 0){
        printf("Número inválido");
    }
    else if (numero == 1){
        printf("0\n");
    }
    else if(numero == 2){
        printf("1\n");
    }
    else{
        while(cont + 2< numero){
        cont += 1;
        fib3 = fib2 + fib1;
        //printf(" - %d", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    printf(" %d\n", fib3);
    }
    return 0;
}