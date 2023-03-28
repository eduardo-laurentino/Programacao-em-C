#include <stdio.h>

int main (void){
    float salario, novoSalario, aumento = 1.35;
    char funcionario;
    printf("Digite o nome do funcionário\n");
    scanf("%s", &funcionario);
    printf("Digite o salário\n");
    scanf("%f", &salario);
    novoSalario = aumento*salario;
    printf("O salário depois do reajuste será %.2f", novoSalario);



    return 0;
}