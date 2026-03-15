#include <stdio.h>

int main(void)
{
    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("\n\n");

    for (int i = 9; i >= 0; i--)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}