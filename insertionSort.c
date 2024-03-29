#include <stdio.h>

void insertionSort(int arr[], int tamanhho) {
    int i, chave, j;
    for (i = 1; i < tamanhho; i++) {
        chave = arr[i];
        j = i - 1;

        // Mova os elementos maiores do que a chave para a direita
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, tamanho);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}