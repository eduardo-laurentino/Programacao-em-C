#include <stdio.h>

void trocar(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int particionar(int arr[], int baixo, int alto)
{
    int pivô = arr[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++)
    {
        if (arr[j] < pivô)
        {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int arr[], int baixo, int alto)
{
    if (baixo < alto)
    {
        int pi = particionar(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nArray ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}