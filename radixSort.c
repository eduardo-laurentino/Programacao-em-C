#include <stdio.h>

// Função para encontrar o maior número em um array
int encontrarMaior(int arr[], int n) {
    int maior = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

// Função para ordenar o array usando o Radix Sort
void radixSort(int arr[], int n) {
    int maior = encontrarMaior(arr, n);
    for (int exp = 1; maior / exp > 0; exp *= 10) {
        int output[n];
        int contador[10] = {0};

        // Contagem da ocorrência de cada dígito
        for (int i = 0; i < n; i++) {
            contador[(arr[i] / exp) % 10]++;
        }

        // Atualização do contador para indicar as posições reais dos dígitos no array ordenado
        for (int i = 1; i < 10; i++) {
            contador[i] += contador[i - 1];
        }

        // Construção do array ordenado
        for (int i = n - 1; i >= 0; i--) {
            output[contador[(arr[i] / exp) % 10] - 1] = arr[i];
            contador[(arr[i] / exp) % 10]--;
        }

        // Copia o array ordenado de volta para o array original
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    radixSort(arr, n);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}