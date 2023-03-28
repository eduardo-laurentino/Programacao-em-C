#include <stdio.h>

int somaFat(int numero){
    //int numero;
    int fatorial = 1;
    //printf("Digite um número: ");
    //scanf("%d", &numero);

    while(numero > 1){
        fatorial *= numero;
        numero = numero - 1;
        //printf("%d\n", fatorial);
    }

//printf("%d\n", fatorial);
    return fatorial;
}
int main(void){
    int contador;
    int somafat = 0;
    printf("Digite um número: ");
    scanf("%d", &contador);
    while(contador >=1){
        int result = somaFat(contador);
        contador -= 1;
        somafat += result;
    printf("%d\n", result);
    }
    printf("%d\n", somafat + 1);
    return 0;
}