#include <stdio.h>

int pesquisaBinaria(int array[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (array[meio] == valor) {
            return meio; // Valor encontrado na posição 'meio'
        }

        if (array[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1; // Valor não encontrado
}

int main() {
    int array[] = {5, 10, 15, 25, 30, 40};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valorProcurado = 30;

    int resultado = pesquisaBinaria(array, tamanho, valorProcurado);

    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valorProcurado,resultado);
    }
}