#include <stdio.h>

int pesquisaSequencial(int array[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == valor) {
            return i; // Valor encontrado na posição i
        }
    }
    return -1; // Valor não encontrado
}

int main() {
    int array[] = {10, 25, 5, 40, 15, 30};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valorProcurado = 15;

    int resultado = pesquisaSequencial(array, tamanho, valorProcurado);

    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valorProcurado, resultado);
    } else {
        printf("Valor %d não encontrado na lista.\n", valorProcurado);
    }

    return 0;
}