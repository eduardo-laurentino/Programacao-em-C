#include <stdio.h>

void selectionSort(int arr[], int tamanho)
{
    int i, j, min_idx, temp;
    for (i = 0; i < tamanho - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < tamanho; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, tamanho);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}