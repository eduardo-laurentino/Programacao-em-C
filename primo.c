#include <stdio.h>

int primo(int numero){
    int cont = 0;
    for (int i = 1; i <= numero; i++){
        if(numero % i == 0){
            cont++;
    }
}
if(cont == 2){
    return 1;
}else{
    return 0;
    }
}

int main(void){
    int numero, retorno;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("%d\n", retorno = primo(numero));
    return 0;
}