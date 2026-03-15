#include <stdio.h>

int main(void)
{
    int numeros[10], TAM = 10;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    printf("\n\n");
    
    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            numeros[i] = 1;
        }

        else
        {
            numeros[i] = -1;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}