#include <stdio.h>

int main(void){
    float valorHora, horasTrabalhadas, salario, aumento = 1.1;
    printf("Digite o valor por hora \n");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas trabalhadas \n");
    scanf("%f", &horasTrabalhadas);
    salario = valorHora*horasTrabalhadas*aumento;
    printf("O valor a ser pago é %.2f", salario);


    return 0;
}