#include <stdio.h>

int main(void){
    int i;
    float valorVenda, totalPagar, descontoAvista = 0.9, valorParcela, comissaoAvista, comissaoParcelada, taxaComissao = 0.05;
    printf("Digite o valor da venda\n");
    scanf("%f", &valorVenda);
    printf("\n========== No caso de vendas a vista ==========\n");
    totalPagar = valorVenda*descontoAvista;
    printf("Valor total a ser pago = %.2f \n", totalPagar);
    comissaoAvista = taxaComissao*totalPagar;
    printf("Comissão do vendedor = %.2f \n", comissaoAvista);
    printf("\n========== No caso de vendas parceladas ==========\n");
    valorParcela = valorVenda/3;
    for(i=1; i<=3;i++){
        printf("Valor da parcela %d = %.2f \n", i, valorParcela);
    }
    comissaoParcelada = taxaComissao*valorVenda;
    printf("Comissão do vendedor = %.2f\n", comissaoParcelada);


    return 0;
}