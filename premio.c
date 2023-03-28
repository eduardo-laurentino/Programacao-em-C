#include <stdio.h>

int main (void){
    float importancia, ganhador1, ganhador2, ganhador3;
    printf("Digite o valor do Prêmio\n");
    scanf("%f", &importancia);
    ganhador1 = 1.46*importancia;
    printf("O ganhador 1 receberá %.2f", ganhador1);



    return 0;
}