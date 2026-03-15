#include <stdio.h>

int main(void)
{
    int i, TAM = 10, num[10];

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\n");

    for (i = 0; i < TAM; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}