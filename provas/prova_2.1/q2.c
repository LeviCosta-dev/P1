#include <stdio.h>

int contar_isolados(int arr[], int n, int i, int count)
{
    if (i == n - 1)
    {
        if (arr[i] > arr[0] && arr[i] > arr[i-1])
        {
            count++;
        }

        return count;
    }

    else
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1] && arr[i] > arr[n-1])
            {
                count++;
            }
        }

        else
        {
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            {
                count++;
            }
        }

        return contar_isolados(arr, n, i + 1, count);
    }
}

void ler(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    else
    {
        scanf("%d", &arr[i]);

        ler(arr, n, i + 1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    ler(arr, n, 0);

    int isolados = contar_isolados(arr, n, 0, 0);

    printf("%d\n", isolados);


    return 0;
}