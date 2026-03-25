#include <stdio.h>

int main(void)
{
    int alice, beto, clara;
    scanf("%d %d %d", &alice, &beto, &clara);

    // Alice ganha
    if (alice == 1 && beto == 0 && clara == 0)
    {
        printf("A\n");
    }

    else if (alice == 0 && beto == 1 && clara == 1)
    {
        printf("A\n");
    }


    // Beto ganha
    else if (alice == 0 && beto == 1 && clara == 0)
    {
        printf("B\n");
    }

    else if (alice == 1 && beto == 0 && clara == 1)
    {
        printf("B\n");
    }


    // Clara ganha
    else if (alice == 0 && beto == 0 && clara == 1)
    {
        printf("C\n");
    }

    else if (alice == 1 && beto == 1 && clara == 0)
    {
        printf("C\n");
    }


    // Nenhum ganha
    else
    {
        printf("*\n");
    }
}