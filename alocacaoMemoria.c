#include <stdio.h>
#include <stdlib.h>


int funcaoMalloc(){
    int *array;
    int tamanho = 5;

    // Aloca memória para um array de inteiros
    array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Preenche o array com alguns valores
    for (int i = 0; i < tamanho; i++) {
        array[i] = i * 2;
    }

    // Imprime os valores do array
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Libera a memória alocada quando não for mais necessária
    free(array);
    // Agora, o ponteiro 'array' não é mais válido
    array = NULL;


    return 0;

}

int funcaoCalloc(){
    int *array;
    int tamanho = 5;

    // Aloca memória para um array de inteiros e inicializa com zeros
    array = (int *)calloc(tamanho, sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // O array agora está inicializado com zeros
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]); // Imprime 0 para cada elemento
    }
    printf("\n");
    // Libera a memória alocada quando não for mais necessária
    free(array);
    // Agora, o ponteiro 'array' não é mais válido
    array = NULL;


    return 0;
}

int funcaoRealloc(){
    int *array;
    int tamanho_inicial = 5;
    int novo_tamanho = 10;

    // Aloca memória para um array de inteiros
    array = (int *)malloc(tamanho_inicial * sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Alocar mais memória usando realloc()
    int *novo_array = (int *)realloc(array, novo_tamanho * sizeof(int));

    if (novo_array == NULL) {
        printf("Falha na realocação de memória.\n");
        free(array);
        return 1;
    }

    // O novo array pode ser usado com o tamanho aumentado
    for (int i = 0; i < novo_tamanho; i++) {
        novo_array[i] = i;
    }
    printf("\n");
    // Libera a memória alocada
    free(novo_array);

    return 0;
}

int	main(void){
    //funcaoMalloc();
    //funcaoCalloc();
    funcaoRealloc();

    system("pause");
    return 0;
}
