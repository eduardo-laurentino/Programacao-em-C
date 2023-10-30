#include <stdio.h>

void bubbleSort(int arr[], int tamanho) {
    int temp;
    int troca;
    for (int i = 0; i < tamanho - 1; i++) {
        troca = 0; // Variável para otimização
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                troca = 1; // Indica que houve troca nesta passagem
            }
        }
        // Se não houve trocas nesta passagem, a lista já está ordenada
        if (troca == 0) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, tamanho);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}