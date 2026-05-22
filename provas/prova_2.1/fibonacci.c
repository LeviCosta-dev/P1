#include <stdio.h>

void imprimir(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        printf("%d\n", arr[i]);
        return;
    }

    printf("%d ", arr[i]);
    imprimir(arr, n, i + 1);
}

void contar_fibonacci(int arr[], int n, int i)
{
    if (i == 0)
    {
        arr[i] = 0;
    }

    else if (i == 1)
    {
        arr[i] = 1;
    }

    else
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    if (i == n - 1)
    {
        imprimir(arr, n, 0);
        return;
    }

    contar_fibonacci(arr, n, i + 1);
}

void ler()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        return;
    }

    int arr[n];
    contar_fibonacci(arr, n, 0);

    ler();
}

int main(void)
{
    ler();
}