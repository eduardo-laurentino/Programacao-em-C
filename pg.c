#include <stdio.h>
#include <math.h>

int main(void){
    int iniPG, razaoPG, buscaPG, enesimoPG;
    printf("Digite o valor inicial da PG: ");
    scanf("%d", &iniPG);
    printf("Digite o valor da razão da PG: ");
    scanf("%d", &razaoPG);
    printf("Digiteo termo que deseja encontrar na PG: ");
    scanf("%d", &buscaPG);

    enesimoPG = iniPG * (pow(razaoPG = 5, buscaPG = 3));
    printf("%d\n", enesimoPG);

    return 0;
}