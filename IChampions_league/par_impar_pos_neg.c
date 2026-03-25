#include <stdio.h>

int main(void)
{
    long int n;
    scanf("%ld", &n);

    // Nulo
    if (n == 0)
    {
        printf("NULO");
        return 0;
    }

    // Par
    if (n % 2 == 0)
    {
        // Positivo
        if (n > 0)
        {
            printf("POSITIVO PAR");
        }

        // Negativo
        else
        {
            printf("NEGATIVO PAR");
        }
    }

    // Impar
    else
    {
        // Positivo
        if (n > 0)
        {
            printf("POSITIVO IMPAR");
        }

        // Negativo
        else
        {
            printf("NEGATIVO IMPAR");
        }
    }


    return 0;
}