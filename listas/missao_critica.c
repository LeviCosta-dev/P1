#include <stdio.h>

void decodificar(int l);

int main(void)
{
    char team;
    scanf("%c", &team);

    int l;
    scanf("%d", &l);

    decodificar(l);

    if (team == 'A')
    {
        printf("Equipe Alpha recebeu a mensagem!\n");
    }
    if (team == 'B')
    {
        printf("Equipe Bravo recebeu a mensagem!\n");
    }
    if (team == 'C')
    {
        printf("Equipe Charlie recebeu a mensagem!\n");
    }
    if (team == 'D')
    {
        printf("Equipe Delta recebeu a mensagem!\n");
    }
}


void decodificar(int l)
{
    if (l == 0)
    {
        return;
    }
    else
    {
        int n1, n2, n3, n4, n5, n6, n7, n = 0;
        scanf("%d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7);

        if (n7 == 1)
        {
            n += 1;
        }
        if (n6 == 1)
        {
            n += 2;
        }
        if (n5 == 1)
        {
            n += 4;
        }
        if (n4 == 1)
        {
            n += 8;
        }
        if (n3 == 1)
        {
            n += 16;
        }
        if (n2 == 1)
        {
            n += 32;
        }
        if (n1 == 1)
        {
            n += 64;
        }

        printf("Letra decodificada: %c\n", n);


        return decodificar(l - 1);
    }
}