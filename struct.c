#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct  listaPostal{
        char nome[30];
        char  rua[40];
        char cidade [20];
        char estado[3];
        int zip;
     } adicionar_informmacao[MAX];

void iniciar_lista(void){
    register int t;
    for(t = 0; t < MAX; t++){
        adicionar_informmacao[t].nome[0] = '\0';
    }
}
char menu (void){
    char s[80];
    int c;
    printf("1. Inserir um nomen");
    printf("2. Excluir u nome");
    printf("3. Listar o aquivo");
    printf("4. Sair\n");
    do{
        printf("Digite sua escolha: ");
        scanf("%s", s);
        c = atoi(s);
    }
    while(c < 0 || c > 4);
    return c;
}
int encontrar_livre(void){
    printf("\n");
}
void entrar(void){
    int slot;
    char s[80];
    slot = encontrar_livre();
    if(slot == -1){
        printf("Lista cheia!");
        return;
}

printf("Digite o nome: ");
scanf("%s", adicionar_informmacao[slot].nome);

printf("Digie a Rua: ");
scanf("%s", adicionar_informmacao[slot]. rua);

printf("Digite a Cidade: ");
scanf("%s", adicionar_informmacao[slot].cidade);

printf("Digite o Estado: ");
scanf("%s", adicionar_informmacao[slot].estado);

printf("Digite o CEP: ");
puts(adicionar_informmacao[slot].zip);
//dicionar_informmacao[slot].zip = strtoul(s, '\0', 10);

}

void apagar(void), lista(void);  

int main(void){
    char escolha, menu();
    iniciar_lista();
    for (;;){
        escolha = menu();
        switch (escolha){
            case 1: 
                entrar();
                break;
            case 2:
                apagar();
                break;
            case 3:
                lista();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}