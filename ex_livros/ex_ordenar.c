#include <stdio.h>

int main(void)
{
    int TAM = 10, num[TAM + 1], i, count, aux;

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\n");

    for (i = 0; i < TAM; i++)
    {
        for (count = 0; count < TAM; count++)
        {
            if (num[count] > num[i])
            {
                aux = num[count];
                num[count] = num[i];
                num [i] = aux;
            }
        }
    }

    for (i = 0; i < TAM; i++)
    {
        printf("%d\n", num[i]);
    }


    return 0;
}