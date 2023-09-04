#include <math.h>
#include <stdio.h>

int	main(){

     double x = 0.5;  // Cosseno de 60 graus (π/3 radianos)
    double y = 4.0;
    double numero = 5.7;
    double angulo = 1.0472;
    double numeroAbs = -5.7;
    double base = 2.0;
    double expoente = 3.0;



    double arcoCosseno = acos(x);
    double arcoSeno = asin(x);
    double arcoTangente = atan(x);
    double arcoaTan2 = atan2(y, x);
    double teto = ceil(numero);
    double cosseno = cos(angulo);
    double cossenoHiperbolico = cosh(x);
    double funcaoExponencial = exp(x);
    double absoluto = fabs(numeroAbs);
    double piso = floor(numero);
    double dividendo = 10.5;
    double divisor = 3.0;
    double resto = fmod(dividendo, divisor);
    double logaritmo = log(numero);
    double loG10 = log10(numero);
    double fracionaria = modf(numero, &numero);
    double potencia = pow(base, expoente);
    double seno = sin(angulo);
    double senoHiperbolico = sinh(x);
    double raiz_quadrada = sqrt(numero);
    double tangente = tan(angulo);
    double tangenteHiperbolica = tanh(x);



    printf("O arco cosseno de %f é %f radianos\n", x, arcoCosseno);
    printf("O arco seno de %f é %f radianos\n", x, arcoSeno);
    printf("O arco tangente de %f é %f radianos\n", x, arcoTangente);
    printf("O ângulo entre o ponto (%f, %f) e a origem é %f radianos\n", x, y, arcoaTan2);
    printf("O teto de %f é %f\n", numero, teto);
    printf("O cosseno de %f radianos é %f\n", angulo, cosseno);
    printf("O cosseno hiperbólico de %lf é %lf\n", x, cossenoHiperbolico);
    printf("A exponencial de %f é %f\n", x, funcaoExponencial);
    printf("O valor absoluto de %f é %f\n", numeroAbs, absoluto);
    printf("O piso de %f é %f\n", numero, piso);
    printf("O resto da divisão de %f por %f é %f\n", dividendo, divisor, resto);
    printf("O logaritmo natural de %f é %f\n", numero, logaritmo);
    printf("O logaritmo na base 10 de %f é %f\n", numero, loG10);
    printf("Parte inteira: %f\n Parte fracionária: %f\n", numero, fracionaria);
    printf("%f elevado a %f é igual a %f\n", base, expoente, potencia);
    printf("O seno de %f radianos é aproximadamente %f\n", angulo, seno);
    printf("O seno hiperbólico de %f é aproximadamente %f\n", x, senoHiperbolico);
    printf("A raiz quadrada de %f é %f\n", numero, raiz_quadrada);
    printf("A tangente de %f radianos é aproximadamente %f\n", angulo, tangente);
    printf("A tangente hiperbólica de %f é aproximadamente %f\n", x, tangenteHiperbolica);


    return 0;
}
