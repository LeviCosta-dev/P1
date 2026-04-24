#include <stdio.h>

void ciclista(int n, int count)
{
    if (count > n)
    {
        return;
    }

    char sexo;
    int idade;
    double distancia;

    scanf(" %c %d %lf", &sexo, &idade, &distancia);

    if (sexo == 'M')
    {
        if (idade <= 29)
        {
            if (distancia >= idade * 1.4)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
        else if (idade <= 49)
        {
            if (distancia >= idade * 1.2)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
        else
        {
            if (distancia >= idade)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
    }
    else
    {
        if (idade <= 29)
        {
            if (distancia >= idade * 1.2)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
        else if (idade <= 49)
        {
            if (distancia >= idade)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
        else
        {
            if (distancia >= idade * 0.9)
            {
                printf("Ciclista %d: Atingiu a meta\n", count);
            }
            else
            {
                printf("Ciclista %d: Nao atingiu a meta\n", count);
            }
        }
    }

    return ciclista(n, count + 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    ciclista(n, 1);


    return 0;
}