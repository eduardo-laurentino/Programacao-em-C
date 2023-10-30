#include <stdio.h>

void shellSort(int arr[], int tamanho)
{
    for (int gap = tamanho / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < tamanho; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    shellSort(arr, tamanho);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}