#include <stdio.h>

int main(void){
    float salarioBase, salarioTotal, gratificacao = 1.05, desconto = 0.93;
    printf("Digite o valor do salário \n");
    scanf("%f", &salarioBase);
    salarioBase = salarioBase * gratificacao;
    salarioTotal = salarioBase * desconto;
    printf("O salario a ser recebido é %.2f", salarioTotal);


    return 0;
}