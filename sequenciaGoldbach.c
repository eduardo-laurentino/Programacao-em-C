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
    int numero, metade, isPrimo, aux;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        //metade = numero / 2;
        for (int i = numero; i >=1; i--){
            isPrimo = primo(i);
            if(isPrimo == 1){
                aux = numero - i;
                int verifica = primo(aux);
                if(verifica == 1){
                    printf("%d %d\n", i, aux);
                }
            }
        }
    }
    else{
        printf("Número Inválido\nDigite um número Par!\n");
    }
    return 0;
}