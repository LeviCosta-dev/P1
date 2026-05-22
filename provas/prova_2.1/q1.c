#include <stdio.h>

void contar_fibonacci(long long int arr[], int n, int i)
{
    if (i > n)
    {
        printf("%lld\n", arr[i-1]);
        return;
    }

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


    contar_fibonacci(arr, n, i + 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    long long int arr[n];

    contar_fibonacci(arr, n, 0);


    return 0;
}