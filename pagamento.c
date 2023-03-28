#include <stdio.h>
int  main(void){
    float valorDiaria = 30.00, impostoRenda = 0.92, pagamento, qtdDias;
    printf("Digite a Quantidade de dias trabalhados\n");
    scanf("%f", &qtdDias);
    pagamento = qtdDias*valorDiaria*impostoRenda;
    printf("O valor a ser pago é R$ %.2f\n", pagamento);


    return 0;
}