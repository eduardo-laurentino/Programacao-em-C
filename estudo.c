#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int incremento(){
    int z, x = 5;
    int y = z = ++x;
    //int y = z = x++;
    x++;
    printf("valor de y = %d\n", y);
    printf("valor de z = %d\n", z);
    printf("valor de x = %d\n", x);
    return 0;
}

int forSemIncremento()
{
    // enquanto for digitado um valor diferente de 123 for será executado
    printf("Digite um número:\n");
    int x;
    for (x = 0; x != 123;)

        scanf("%d", &x);
    return 0;
}

float salarioHora()
{
    float valorHora, horasTrabalhadas, salario, aumento = 1.1;
    printf("Digite o valor por hora \n");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas trabalhadas \n");
    scanf("%f", &horasTrabalhadas);
    salario = valorHora * horasTrabalhadas * aumento;
    printf("O valor a ser pago é %.2f\n", salario);
    return 0;
}

float comissao()
{
    int i;
    float valorVenda, totalPagar, descontoAvista = 0.9, valorParcela, comissaoAvista, comissaoParcelada, taxaComissao = 0.05;
    printf("Digite o valor da venda\n");
    scanf("%f", &valorVenda);
    printf("\n========== No caso de vendas a vista ==========\n");
    totalPagar = valorVenda * descontoAvista;
    printf("Valor total a ser pago = %.2f \n", totalPagar);
    comissaoAvista = taxaComissao * totalPagar;
    printf("Comissão do vendedor = %.2f \n", comissaoAvista);
    printf("\n========== No caso de vendas parceladas ==========\n");
    valorParcela = valorVenda / 3;
    for (i = 1; i <= 3; i++)
    {
        printf("Valor da parcela %d = %.2f \n", i, valorParcela);
    }
    comissaoParcelada = taxaComissao * valorVenda;
    printf("Comissão do vendedor = %.2f\n", comissaoParcelada);
    return 0;
}

int hora()
{
    int seg, hra, mnt, sgnd;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seg);
    printf("A quantidade de segundos informada foi: %d\n", seg);
    if (seg >= 3600 && seg % 3600 < 60)
    {
        hra = seg / 3600;
        mnt = 00;
        sgnd = seg % 60;
        printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
    }
    if (seg >= 3600 && seg % 3600 == 60)
    {
        hra = 1 + seg / 3600;
        mnt = 00;
        sgnd = seg % 60;
        printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
    }
    if (seg >= 3600 && seg % 3600 > 60)
    {
        hra = seg / 3600;
        mnt = seg % 3600 / 60;
        sgnd = seg % 60;
        printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
    }
    if (seg < 3600)
    {
        hra = seg / 3600;
        mnt = seg / 60;
        sgnd = seg % 60;
        printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
    }
    return 0;
}

float ponteiro(){
    float x = 20.5;
    float *p;
    float **q;
    p = &x;
    q = &p;
    //y = *p;
    printf("%.2f\n", **q);
    return 0;
}

char stringReversa(){
    char s[100];
    printf("Digite uma frase: ");
    scanf("%s", s);
    register int t;
    for(t = strlen(s)-1; t >= 0; t--){
        putchar(s[t]);
    }
    printf("\n");
}

int testeSizeof(){
    float vteste;
    typedef struct {
        int day;
        char wind[4];
    } s_weather;
    
    typedef union {
        int day;
        char wind[4];
    } u_weather;
    s_weather s, *p_s, **pp_s;
    u_weather u, *p_u, **pp_u;
    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(u));
    printf("%d\n", sizeof(p_s));
    printf("%d\n", sizeof(p_u));
    printf("%d\n", sizeof(pp_s));
    printf("%d\n", sizeof(pp_u));
    printf(" --- TIPO ---|--- BYTES ---\n");
    printf(" char .......: %d bytes\n", sizeof(char));
    printf(" short.......: %d bytes\n", sizeof(short));
    printf(" int.........: %d bytes\n", sizeof(int));
    printf(" long........: %d bytes\n", sizeof(long));
    printf(" float ......: %d bytes\n", sizeof(float));
    printf(" double......: %d bytes\n", sizeof(double));
    printf(" long double.: %d bytes\n\n", sizeof(long double));
    printf("\nO tamanho de vteste e...: %d \n\n",sizeof vteste);
    return 0;
}

char testeStrings(){
    char s1[80], s2[80];
    printf("Digite a primeira String: ");
    scanf("%s", &s1);
    printf("Digite a segunda String: ");
    scanf("%s", &s2);
    printf("Comprimentos: %d %d \n", strlen(s1), strlen(s2));
    if(!strcmp(s1, s2)){
        printf("As strings são iguais\n");
        strcat(s1, s2);
        printf("%s\n", s1);
    }
    return 0;
}

int ePrimo(int numero)
{
    int cont = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int qtdAlgarismos()
{
    int cont = 0;
    int val;
    printf("Digite um número inteiro: ");
    scanf("%d", &val);
    while (val >= 1)
    {
        val /= 10;
        cont += 1;
    }
    printf("%d\n", cont);

    return 0;
}

void primo()
{
    int numero, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        printf("É primo\n");
    }
    else
    {
        printf("Não é primo\n");
    }
}

int modulo()
{
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    if (numero1 == numero2)
    {
        return 0;
    }
    else if (numero1 > numero2)
    {
        while (numero1 > numero2)
        {
            numero1 -= numero2;
        }
        return numero1;
    }
    else
    {
        return numero2;
    }
}

int potencia()
{
    int numero1, numero2, resultado = 1;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    if (numero2 == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= numero2; i++)
        {
            resultado *= numero1;
        }
        return resultado;
    }
}

int divisao(){
    int numero1, numero2, cont = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    if (numero1 < numero2){
        return 0;
    }else if (numero1 == numero2){
        return 1;
    }else if (numero2 == 1){
        return numero1;
    }else{
        while (numero1 >= numero2){
            numero1 -= numero2;
            cont += 1;
        }
        return cont;
    }
}

int enesimoPG()
{
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

int fibonacci()
{
    int numero, fib1 = 0, fib2 = 1, fib3, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero < 0)
    {
        printf("Número inválido");
    }
    else if (numero == 1)
    {
        // printf("0\n");
        return fib1;
    }
    else if (numero == 2)
    {
        // printf("1\n");
        return fib2;
    }
    else
    {
        while (cont + 2 < numero)
        {
            cont += 1;
            fib3 = fib2 + fib1;
            // printf(" - %d", fib3);
            fib1 = fib2;
            fib2 = fib3;
        }
        printf(" %d\n", fib3);
    }
    return 0;
}

int auxFib(int numero)
{
    int fib1 = 0, fib2 = 1, fib3, cont = 0;
    if (numero < 0)
    {
        return 0;
    }
    else if (numero == 1)
    {
        return 0;
    }
    else if (numero == 2)
    {
        return 1;
    }
    else
    {
        while (cont + 2 < numero)
        {
            cont += 1;
            fib3 = fib2 + fib1;
            fib1 = fib2;
            fib2 = fib3;
        }
        return fib3;
    }
}

int fatorial()
{
    int numero;
    int fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);

    while (numero > 1)
    {
        fatorial *= numero;
        numero = numero - 1;
        // printf("%d\n", fatorial);
    }

    printf("%d\n", fatorial);
    return 0;
}

int fat(int numero)
{
    int fatorial = 1;
    while (numero > 1)
    {
        fatorial *= numero;
        numero = numero - 1;
    }
    return fatorial;
}

int somaFatoriais()
{
    int contador;
    int somafat = 0;
    printf("Digite um número: ");
    scanf("%d", &contador);
    while (contador >= 1)
    {
        int result = fat(contador);
        contador -= 1;
        somafat += result;
        printf("%d\n", result);
    }
    printf("%d\n", somafat);
    return 0;
}

int geraFatorial()
{
    int numero, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    int aux = numero;
    while (numero > 1)
    {
        cont += 1;
        numero /= cont;
    }
    printf("O número que gera o fatorial %d é %d\n", aux, cont);
    return 0;
}

int goldbach()
{
    int numero, isPrimo, aux;
    printf("Digite um número Par: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        // metade = numero / 2;
        for (int i = numero; i >= 1; i--)
        {
            isPrimo = ePrimo(i);
            if (isPrimo == 1)
            {
                aux = numero - i;
                int verifica = ePrimo(aux);
                if (verifica == 1)
                {
                    printf("%d %d\n", i, aux);
                }
            }
        }
    }
    else
    {
        printf("Número Inválido\nDigite um número Par!\n");
    }
    return 0;
}

void pertenceFibonacci()
{
    int num, aux = 0, i = 1;
    printf("Digite um número para verificar se pertence a sequência de fibonacci: ");
    scanf("%d", &num);
    while (aux <= num)
    {
        aux = auxFib(i);
        i += 1;
        if (aux == num)
        {
            printf("O número %d pertence a sequência de fibonacci\n", num);
            break;
        }
        else if (aux > num)
        {
            printf("O número %d não pertence a sequência de fibonacci\n", num);
        }
    }
}


void numeroPerfeito(){
    int num;
    int aux = 0;
    printf("Digite um número: ");
    scanf("%d", & num);

    for(int i = 1; i < num -1; i++){
        if(num % i == 0){
            aux += i;
            printf("%d %d\n", num, aux);
        }
    }
    if(aux == num){
        printf("%d É um número perfeito!", num);
    }else{
        printf("%d Não é um número perfeito!", num);
        }
}

int lerArquivo(){
    FILE *fp;
    char ch;
    fp = fopen ("teste.txt", "r");
    ch = getc(fp);
    while (ch != EOF){
        putchar(ch);
        ch = getc(fp);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

int funcaoFputs(){
    FILE *fp = fopen("arquivo.txt", "w");
    if (fp != NULL) {
        fputs("Hello, World!", fp);
        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoFgets(){
    FILE *fp = fopen("arquivo.txt", "r");
    if (fp != NULL) {
        char linha[100];
        while (fgets(linha, sizeof(linha), fp) != NULL) {
            printf("%s", linha);
        }
        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoStrcat(){
    char destino[50] = "Hello, ";
    const char *origem = "World!";

    strcat(destino, origem);

    printf("String concatenada: %s\n", destino);

    return 0;
}

int funcaoStrncat(){
    char destino[20] = "Hello, ";
    char origem[] = "World!";
    
    strncat(destino, origem, 4);  // Anexa apenas os primeiros 4 caracteres de 'origem'

    printf("Resultado: %s\n", destino);

    return 0;

}

int funcaoRewind(){
    FILE *fp = fopen("arquivo.txt", "r");
    if (fp != NULL) {
        char linha[100];

        // Lê e imprime as primeiras duas linhas do arquivo
        fgets(linha, sizeof(linha), fp);
        printf("Linha 1: %s", linha);

        fgets(linha, sizeof(linha), fp);
        printf("Linha 2: %s", linha);

        // Reposiciona o indicador de posição para o início do arquivo
        rewind(fp);

        // Lê e imprime a primeira linha novamente
        fgets(linha, sizeof(linha), fp);
        printf("Linha 1 (repetida): %s", linha);

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

funcaoFerror(){}

int main(void)
{
    // fibonacci();
    // fatorial();
    // geraFatorial();
    // enesimoPG();
    // primo();
    // hora();
    // goldbach();
    // qtdAlgarismos();
    // somaFatoriais();
    // forSemIncremento();
    // salarioHora();
    // comissao();
    // pertenceFibonacci();
    // printf("%d\n", modulo());
    // printf("%d\n", potencia());
    // printf("%d\n", divisao());
    // incremento();
    // ponteiro();
    // stringReversa();
    // testeSizeof();
    // testeStrings();
    // printf("%d\n", sequenciaCatalan());
    // numeroPerfeito();
    //lerArquivo();
    //funcaoFputs();
    //funcaoFgets();
    //funcaoStrcat();
    //funcaoStrncat();
    funcaoRewind();
}