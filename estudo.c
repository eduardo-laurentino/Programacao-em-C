#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <ncurses.h>
#include <locale.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


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
return 0;
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
    printf("%ld\n", sizeof(s));
    printf("%ld\n", sizeof(u));
    printf("%ld\n", sizeof(p_s));
    printf("%ld\n", sizeof(p_u));
    printf("%ld\n", sizeof(pp_s));
    printf("%ld\n", sizeof(pp_u));
    printf(" --- TIPO ---|--- BYTES ---\n");
    printf(" char .......: %ld bytes\n", sizeof(char));
    printf(" short.......: %ld bytes\n", sizeof(short));
    printf(" int.........: %ld bytes\n", sizeof(int));
    printf(" long........: %ld bytes\n", sizeof(long));
    printf(" float ......: %ld bytes\n", sizeof(float));
    printf(" double......: %ld bytes\n", sizeof(double));
    printf(" long double.: %ld bytes\n\n", sizeof(long double));
    printf("\nO tamanho de vteste e...: %ld \n\n",sizeof vteste);
    return 0;
}

char testeStrings(){
    char s1[80], s2[80];
    printf("Digite a primeira String: ");
    scanf("%s", s1);
    printf("Digite a segunda String: ");
    scanf("%s", s2);
    printf("Comprimentos: %ld %ld \n", strlen(s1), strlen(s2));
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

int testandoStruct(){
    struct Ponto2D {
    float x;
    float y;
};

// Criando uma instância da struct Ponto2D
    struct Ponto2D ponto1;

    // Inicializando os membros da struct
    ponto1.x = 3.0;
    ponto1.y = 4.0;

    // Acessando os membros da struct
    printf("Coordenada x: %f\n", ponto1.x);
    printf("Coordenada y: %f\n", ponto1.y);

    return 0;
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

int funcaoFgets1(){
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

int funcaoFerror(){
     FILE *fp = fopen("arquivo_inexistente.txt", "r");
    if (fp != NULL) {
        // Operações de leitura ou escrita no arquivo
        // ...
        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");

        if (ferror(fp)) {
            printf("Erro durante operações de I/O no arquivo.\n");
        }
    }

    return 0;
}

int armazenaErro(){
    //Uma variável global errno é usada para acessar o código de erro associado à última operação que falhou

    FILE *fp = fopen("arquivo_inexistente.txt", "r");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo");
        printf("Número do erro: %d\n", errno);
    } else {
        // Operações de leitura ou escrita no arquivo
        // ...
        fclose(fp);
    }

    return 0;
}

int funcaoFflush(){
    FILE *fp = fopen("arquivo.txt", "w");
    if (fp != NULL) {
        fputs("Hello, World!", fp);

        if (fflush(fp) == 0) {
            printf("Dados gravados com sucesso.\n");
        } else {
            perror("Erro ao gravar os dados");
        }

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoFgets(){
     char buffer[100];  // Buffer para armazenar a linha de texto
    printf("Digite uma linha de texto: ");
    
    // Lê uma linha de texto da entrada padrão (teclado)
    fgets(buffer, sizeof(buffer), stdin);
    
    printf("Você digitou: %s", buffer);
    
    return 0;
}

int funcaoFread(){
    FILE *fp = fopen("arquivo", "rb");
    if (fp != NULL) {
        int numeros[5];

        size_t elementos_lidos = fread(numeros, sizeof(int), 5, fp);

        if (elementos_lidos == 5) {
            for (int i = 0; i < 5; i++) {
                printf("Número %d: %d\n", i + 1, numeros[i]);
            }
        } else {
            printf("Erro na leitura dos dados.\n");
        }

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoFwrite(){
    FILE *fp = fopen("arquivo.", "wb");
    if (fp != NULL) {
        int numeros[5] = {10, 20, 30, 40, 50};

        size_t elementos_escritos = fwrite(numeros, sizeof(int), 5, fp);

        if (elementos_escritos == 5) {
            printf("Dados escritos com sucesso.\n");
        } else {
            printf("Erro na escrita dos dados.\n");
        }

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoFprintf(){
    FILE *fp = fopen("saida.txt", "w");
    if (fp != NULL) {
        int idade = 25;
        double altura = 1.75;

        fprintf(fp, "Idade: %d anos\nAltura: %.2f metros\n", idade, altura);

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoFscanf(){
     FILE *fp = fopen("saida.txt", "r");
    if (fp != NULL) {
        int idade;
        double altura;

        fscanf(fp, "Idade: %d anos\nAltura: %lf metros", &idade, &altura);

        printf("Idade: %d anos\nAltura: %.2f metros\n", idade, altura);

        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoPutchar(){
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(',');

    putchar(' ');

    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');

    putchar('\n');

    return 0;
}

int funcaoFreopen(){
    FILE *original_stdout = stdout;  // Salva o ponteiro do stdout original

    FILE *new_file = fopen("saida.txt", "w");
    if (new_file != NULL) {
        stdout = new_file;  // Redireciona o stdout para o novo arquivo

        printf("Isso será escrito no arquivo.\n");

        // Restaura o stdout original
        stdout = original_stdout;

        printf("Isso será impresso no console.\n");

        fclose(new_file);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

int funcaoRemove(){
    const char *filename = "arquivo.";
    
    if (remove(filename) == 0) {
        printf("Arquivo removido com sucesso.\n");
    } else {
        perror("Erro ao remover o arquivo");
    }

    return 0;
}

int funcaoFseek(){
    FILE *fp = fopen("saida.txt", "r");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    
    fseek(fp, 10, SEEK_SET);  // Move o indicador de posição para a 10ª posição a partir do início
    
    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);  // Imprime o caractere lido na saída padrão
    }

    fclose(fp);
    return 0;
}

int funcaoFgetc(){
    FILE *file = fopen("saida.txt", "r");

    if (file != NULL) {
        int ch;

        while ((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }

        fclose(file);
    } else {
        perror("Erro ao abrir o arquivo");
    }

    return 0;
}

int macro(){
    #define SQUARE(x) ((x) * (x))
    int num = 5;
    int result = SQUARE(num);  // Isso será substituído por ((num) * (num))

    printf("O quadrado de %d é %d\n", num, result);

    return 0;
}

int funcaoCleaerr(){
    // Abre o arquivo "exemplo.txt" para leitura
    FILE *file = fopen("exemplo.txt", "r");
    
    // Verifica se o arquivo foi aberto com sucesso
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1; // Encerra o programa com um código de erro
    }

    // Realiza operações de leitura no arquivo...
    
    // Após as operações, limpa indicadores de erro/fim de arquivo
    clearerr(file);

    // Continua com operações de leitura (sem ser afetado por indicadores anteriores)...

    // Fecha o arquivo
    fclose(file);
    
    return 0; // Encerra o programa indicando que tudo ocorreu bem

}

int funcaoClose(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Realiza operações de leitura...

    // Fecha o arquivo usando a função close()
    int result = close(fileno(file));
    if (result == -1) {
        perror("Erro ao fechar o arquivo");
        return 1;
    }

    return 0;
}


int funcaoFclose(){
    FILE *file = fopen("exemplo.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(file, "Olá, mundo!\n");
    
    if (fclose(file) == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        perror("Erro ao fechar o arquivo");
    }

    return 0;
}

int funcaoFeof(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Imprime o caractere lido
    }

    if (feof(file)) {
        printf("\nChegou ao final do arquivo.\n");
    } else {
        printf("\nOcorreu um erro ou operações ainda podem ser feitas.\n");
    }

    fclose(file);
    return 0;
}

int funcaoFgetpos(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fpos_t position;
    if (fgetpos(file, &position) != 0) {
        perror("Erro ao obter a posição");
        fclose(file);
        return 1;
    }

    // Realiza operações de leitura...

    // Voltar à posição original usando fsetpos() com 'position'

    fclose(file);
    return 0;
}

int funcaoFopen(){
    FILE *file = fopen("exemplo.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    
    fclose(file);
    return 0;
}

int funcaoFputc(){
    FILE *file = fopen("exemplo.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int caractere = 'A'; // O código ASCII de 'A' é 65

    if (fputc(caractere, file) == EOF) {
        perror("Erro ao escrever o caractere");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}

int funcaoFsetpos(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fpos_t position;
    if (fgetpos(file, &position) != 0) {
        perror("Erro ao obter a posição");
        fclose(file);
        return 1;
    }

    // Realiza operações de leitura...

    // Volta à posição original usando fsetpos()
    if (fsetpos(file, &position) != 0) {
        perror("Erro ao voltar à posição original");
        fclose(file);
        return 1;
    }

    // Continua operações de leitura a partir da posição original...

    fclose(file);
    return 0;
}

int funcaoFtell(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Realiza operações de leitura...

    // Obtém a posição atual
    long int posicao = ftell(file);
    if (posicao == -1L) {
        perror("Erro ao obter a posição");
        fclose(file);
        return 1;
    }

    printf("A posição atual no arquivo é: %ld\n", posicao);

    fclose(file);
    return 0;
}

int funcaoGetc(){
    FILE *file = fopen("exemplo.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int caractere;

    // Lê e imprime cada caractere no arquivo
    while ((caractere = getc(file)) != EOF) {
        putchar(caractere);
    }

    fclose(file);
    return 0;
}

int funcaoGetchar(){
    char tecla;

    printf("Pressione uma tecla: ");
    tecla = getchar(); // Lê um caractere do teclado sem precisar pressionar Enter

    printf("\nVocê pressionou a tecla: %c\n", tecla);

    return 0;
}

int funcaoPerror(){
    FILE *file = fopen("nao_existe.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    // Resto do código...

    fclose(file);
    return 0;
}

int funcaoPutc(){
    FILE *file = fopen("exemplo.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int caractere = 'A'; // O caractere que queremos escrever

    // Escreve o caractere no arquivo usando putc()
    int resultado = putc(caractere, file);
    if (resultado == EOF) {
        perror("Erro ao escrever no arquivo");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}

int funcaoRename(){
    const char *nome_antigo = "arquivo_antigo.txt";
    const char *nome_novo = "arquivo_novo.txt";

    if (rename(nome_antigo, nome_novo) == 0) {
        printf("Arquivo renomeado com sucesso.\n");
    } else {
        perror("Erro ao renomear o arquivo");
    }

    return 0;
}

int funcaoSprintf(){
    char buffer[100];
    int numero = 42;
    float valor = 3.14;

    // Formatar uma string e armazená-la em buffer
    int caracteres_escritos = sprintf(buffer, "O número é %d e o valor é %.2f", numero, valor);

    // Imprimir a string resultante
    printf("String formatada: %s\n", buffer);
    printf("Número de caracteres escritos: %d\n", caracteres_escritos);

    return 0;
}

int funcaoSscanf(){
    const char *texto = "O número é 42 e o valor é 3.14";
    int numero;
    float valor;

    // Ler dados da string usando sscanf()
    int num_lidos = sscanf(texto, "O número é %d e o valor é %f", &numero, &valor);

    // Imprimir os valores lidos
    printf("Número: %d\n", numero);
    printf("Valor: %.2f\n", valor);
    printf("Número de valores lidos: %d\n", num_lidos);

    return 0;
}

int funcaoUnlink(){
     const char *nome_arquivo = "exemplo.txt";

    // Tentar excluir o arquivo
    if (unlink(nome_arquivo) == 0) {
        printf("Arquivo %s excluído com sucesso.\n", nome_arquivo);
    } else {
        perror("Erro ao excluir o arquivo");
    }

    return 0;
}


int funcaoIsalnum(){
    char c1 = 'A';
    char c2 = '7';
    char c3 = '@';

    if (isalnum(c1)) {
        printf("%c é alfanumérico.\n", c1);
    } else {
        printf("%c não é alfanumérico.\n", c1);
    }

    if (isalnum(c2)) {
        printf("%c é alfanumérico.\n", c2);
    } else {
        printf("%c não é alfanumérico.\n", c2);
    }

    if (isalnum(c3)) {
        printf("%c é alfanumérico.\n", c3);
    } else {
        printf("%c não é alfanumérico.\n", c3);
    }

    return 0;
}

int funcaoIsalpha(){
    char c1 = 'A';
    char c2 = '7';
    char c3 = '@';

    if (isalpha(c1)) {
        printf("%c é uma letra do alfabeto.\n", c1);
    } else {
        printf("%c não é uma letra do alfabeto.\n", c1);
    }

    if (isalpha(c2)) {
        printf("%c é uma letra do alfabeto.\n", c2);
    } else {
        printf("%c não é uma letra do alfabeto.\n", c2);
    }

    if (isalpha(c3)) {
        printf("%c é uma letra do alfabeto.\n", c3);
    } else {
        printf("%c não é uma letra do alfabeto.\n", c3);
    }

    return 0;
}

int funcaoIscntrl(){
    char c1 = '\n';  // Caractere de nova linha
    char c2 = 'A';   // Uma letra maiúscula
    char c3 = '\t';  // Caractere de tabulação

    if (iscntrl(c1)) {
        printf("%c é um caractere de controle.\n", c1);
    } else {
        printf("%c não é um caractere de controle.\n", c1);
    }

    if (iscntrl(c2)) {
        printf("%c é um caractere de controle.\n", c2);
    } else {
        printf("%c não é um caractere de controle.\n", c2);
    }

    if (iscntrl(c3)) {
        printf("%c é um caractere de controle.\n", c3);
    } else {
        printf("%c não é um caractere de controle.\n", c3);
    }

    return 0;
}

int funcaoIsgraph(){
    char c1 = 'A';      // Uma letra maiúscula
    char c2 = ' ';      // Espaço em branco
    char c3 = '!';      // Um caractere especial

    if (isgraph(c1)) {
        printf("%c é um caractere imprimível e não é espaço em branco.\n", c1);
    } else {
        printf("%c não é um caractere imprimível e não é espaço em branco.\n", c1);
    }

    if (isgraph(c2)) {
        printf("%c é um caractere imprimível e não é espaço em branco.\n", c2);
    } else {
        printf("%c não é um caractere imprimível e não é espaço em branco.\n", c2);
    }

    if (isgraph(c3)) {
        printf("%c é um caractere imprimível e não é espaço em branco.\n", c3);
    } else {
        printf("%c não é um caractere imprimível e não é espaço em branco.\n", c3);
    }

    return 0;
}

int funcaoIslower(){
     char c1 = 'a';      // Uma letra minúscula
    char c2 = 'A';      // Uma letra maiúscula

    if (islower(c1)) {
        printf("%c é uma letra minúscula.\n", c1);
    } else {
        printf("%c não é uma letra minúscula.\n", c1);
    }

    if (islower(c2)) {
        printf("%c é uma letra minúscula.\n", c2);
    } else {
        printf("%c não é uma letra minúscula.\n", c2);
    }

    return 0;
}

int funcaoIsprint(){
    char c1 = 'A';      // Uma letra maiúscula
    char c2 = ' ';      // Espaço em branco
    char c3 = '!';      // Um caractere especial

    if (isprint(c1)) {
        printf("%c é um caractere imprimível.\n", c1);
    } else {
        printf("%c não é um caractere imprimível.\n", c1);
    }

    if (isprint(c2)) {
        printf("%c é um caractere imprimível.\n", c2);
    } else {
        printf("%c não é um caractere imprimível.\n", c2);
    }

    if (isprint(c3)) {
        printf("%c é um caractere imprimível.\n", c3);
    } else {
        printf("%c não é um caractere imprimível.\n", c3);
    }

    return 0;
}

int funcaoIspunct(){
    char c1 = ',';      // Uma vírgula
    char c2 = 'A';      // Uma letra maiúscula
    char c3 = '!';      // Um ponto de exclamação

    if (ispunct(c1)) {
        printf("%c é um caractere de pontuação.\n", c1);
    } else {
        printf("%c não é um caractere de pontuação.\n", c1);
    }

    if (ispunct(c2)) {
        printf("%c é um caractere de pontuação.\n", c2);
    } else {
        printf("%c não é um caractere de pontuação.\n", c2);
    }

    if (ispunct(c3)) {
        printf("%c é um caractere de pontuação.\n", c3);
    } else {
        printf("%c não é um caractere de pontuação.\n", c3);
    }

    return 0;
}

int funcaoIsspace(){
    char c1 = ' ';      // Espaço em branco
    char c2 = '\t';     // Caractere de tabulação
    char c3 = 'A';      // Uma letra maiúscula

    if (isspace(c1)) {
        printf("%c é um caractere de espaço em branco.\n", c1);
    } else {
        printf("%c não é um caractere de espaço em branco.\n", c1);
    }

    if (isspace(c2)) {
        printf("%c é um caractere de espaço em branco.\n", c2);
    } else {
        printf("%c não é um caractere de espaço em branco.\n", c2);
    }

    if (isspace(c3)) {
        printf("%c é um caractere de espaço em branco.\n", c3);
    } else {
        printf("%c não é um caractere de espaço em branco.\n", c3);
    }

    return 0;
}

int funcaoIsupper(){
     char c1 = 'A';      // Uma letra maiúscula
    char c2 = 'a';      // Uma letra minúscula

    if (isupper(c1)) {
        printf("%c é uma letra maiúscula.\n", c1);
    } else {
        printf("%c não é uma letra maiúscula.\n", c1);
    }

    if (isupper(c2)) {
        printf("%c é uma letra maiúscula.\n", c2);
    } else {
        printf("%c não é uma letra maiúscula.\n", c2);
    }

    return 0;
}

int funcaoIsxdigit(){
    char c1 = '1';      // Um dígito hexadecimal válido
    char c2 = 'G';      // Um caractere que não é um dígito hexadecimal
    char c3 = 'A';      // Um dígito hexadecimal válido

    if (isxdigit(c1)) {
        printf("%c é um dígito hexadecimal válido.\n", c1);
    } else {
        printf("%c não é um dígito hexadecimal válido.\n", c1);
    }

    if (isxdigit(c2)) {
        printf("%c é um dígito hexadecimal válido.\n", c2);
    } else {
        printf("%c não é um dígito hexadecimal válido.\n", c2);
    }

    if (isxdigit(c3)) {
        printf("%c é um dígito hexadecimal válido.\n", c3);
    } else {
        printf("%c não é um dígito hexadecimal válido.\n", c3);
    }

    return 0;
}

int funcaoMemchr(){
    char buffer[] = "Hello, World!";
    char *resultado = (char *)memchr(buffer, 'W', strlen(buffer));

    if (resultado != NULL) {
        printf("Encontrado: %c\n", *resultado);
    } else {
        printf("Não encontrado.\n");
    }

    return 0;
}

int funcaoMemcmp(){
    char str1[] = "Hello";
    char str2[] = "World";

    int resultado = memcmp(str1, str2, 5);  // Compara os primeiros 5 bytes

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("str1 é menor do que str2.\n");
    } else {
        printf("str1 é maior do que str2.\n");
    }

    return 0;
}

int funcaoMemcpy(){
    char origem[] = "Hello, World!";
    char destino[20];  // Buffer de destino

    // Copia os primeiros 13 bytes de origem para destino
    memcpy(destino, origem, 13);

    // Adiciona um terminador nulo para criar uma string válida
    destino[13] = '\0';

    printf("String copiada: %s\n", destino);

    return 0;
}

int funcaoMemmove(){
    char buffer[] = "Hello, World!";
    
    // Move a palavra "Hello" 6 posições à direita
    memmove(buffer + 6, buffer, 5);
    
    printf("String modificada: %s\n", buffer);

    return 0;
}

int funcaoMemset(){
    char buffer[10];  // Um buffer de 10 bytes
    
    // Inicializa o buffer com zeros
    memset(buffer, 0, sizeof(buffer));

    // Imprime o conteúdo do buffer
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("buffer[%d] = %d\n", i, buffer[i]);
    }

    return 0;
}

int funcaoStrcoll(){
    setlocale(LC_ALL, "pt_BR");  // Define a localização para o português do Brasil

    const char *str1 = "maçã";
    const char *str2 = "banana";

    int resultado = strcoll(str1, str2);

    if (resultado < 0) {
        printf("%s vem antes de %s na ordenação local.\n", str1, str2);
    } else if (resultado > 0) {
        printf("%s vem depois de %s na ordenação local.\n", str1, str2);
    } else {
        printf("%s e %s são equivalentes na ordenação local.\n", str1, str2);
    }

    return 0;

}

int funcaoStrcpy(){
    char destino[20];  // String de destino
    const char *origem = "Hello, World!";  // String de origem

    // Copia a string de origem para a string de destino
    strcpy(destino, origem);

    printf("String copiada: %s\n", destino);

    return 0;
}

int funcaoStrcspn(){
    const char *str = "Hello, World!";
    const char *conjunto = " ,";  // Espaço e vírgula como caracteres no conjunto

    size_t tamanho = strcspn(str, conjunto);

    printf("Comprimento da porção inicial sem caracteres do conjunto: %zu\n", tamanho);

    return 0;
}

int funcaoStrspn(){
    const char *str = "12345abcde";
    const char *conjunto = "0123456789";  // Conjunto de dígitos

    size_t comprimento = strspn(str, conjunto);

    printf("Comprimento da porção inicial de dígitos: %zu\n", comprimento);

    return 0;
}

int funcaoStrtok(){
     char str[] = "Hello World How Are You";
    const char *delimitadores = " ";  // Espaço em branco como delimitador

    // Primeira chamada para strtok: passa a string original
    char *token = strtok(str, delimitadores);

    // Continua a dividir a string e imprimir os tokens
    while (token != NULL) {
        printf("Token: %s\n", token);

        // Próxima chamada para strtok: passa NULL para continuar
        token = strtok(NULL, delimitadores);
    }

    return 0;
}

int funcaoTolower(){
    int caractere = 'H';  // O caractere 'H' maiúsculo

    int convertido = tolower(caractere);

    printf("Caractere convertido para minúsculas: %c\n", convertido);

    return 0;
}

int funcaoToupper(){
    int caractere = 'h';  // O caractere 'h' minúsculo

    int convertido = toupper(caractere);

    printf("Caractere convertido para maiúsculas: %c\n", convertido);

    return 0;
}

int main(void)
{
    //fibonacci();
    //fatorial();
    //geraFatorial();
    //enesimoPG();
    //primo();
    //hora();
    //goldbach();
    //qtdAlgarismos();
    //somaFatoriais();
    //forSemIncremento();
    //salarioHora();
    //comissao();
    //pertenceFibonacci();
    //printf("%d\n", modulo());
    //printf("%d\n", potencia());
    //printf("%d\n", divisao());
    //incremento();
    //ponteiro();
    //stringReversa();
    //testeSizeof();
    //testeStrings();
    //printf("%d\n", sequenciaCatalan());
    //numeroPerfeito();
    //testandoStruct();
    //lerArquivo();
    //funcaoFputs();
    //funcaoFgets1();
    //funcaoStrcat();
    //funcaoStrncat();
    //funcaoRewind();
    //funcaoFerror();
    //armazenaErro();
    //funcaoFflush();
    //funcaoFread();
    //funcaoFwrite();
    //funcaoFprintf();
    //funcaoFscanf();
    //funcaoPutchar();
    //funcaoFreopen();
    //funcaoOpen();
    //funcaoFgets();
    //funcaoRemove();
    //funcaoFseek();
    //funcaoFgetc();
    //macro();
    //funcaoCleaerr();
    //funcaoClose();
    //funcaoFclose();
    //funcaoFeof();
    //funcaoFgetpos();
    //funcaoFopen();
    //funcaoFputc();
    //funcaoFsetpos();
    //funcaoFtell();
    //funcaoGetc();
    //funcaoGetchar();
    //funcaoPerror();
    //funcaoPutc();
    //funcaoRename();
    //funcaoSprintf();
    //funcaoSscanf();
    //funcaoUnlink();
    //funcaoIsalnum();
    //funcaoIsalpha();
    //funcaoIscntrl();
    //funcaoIsgraph();
    //funcaoIslower();
    //funcaoIsprint();
    //funcaoIspunct();
    //funcaoIsspace();
    //funcaoIsupper();
    //funcaoIsxdigit();
    //funcaoMemchr();
    //funcaoMemcmp();
    //funcaoMemcpy();
    //funcaoMemmove();
    //funcaoMemset();
    //funcaoStrcoll();
    //funcaoStrcpy();
    //funcaoStrcspn();
    //funcaoStrspn();
    //funcaoStrtok();
    //funcaoTolower();
    funcaoToupper();
}