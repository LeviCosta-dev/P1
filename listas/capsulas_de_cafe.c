#include <stdio.h>

void cafe(int p, int ca, int xi)
{
    if (p > 7)
    {
        printf("%d\n%d\n", ca, xi * 2);
        return;
    }
    else
    {
        int caixas;
        char tipo;
        scanf("%d %c", &caixas, &tipo);    

        if (tipo == 'P' || tipo == 'p')
        {
            ca += 10 * caixas;
        }
        else
        {
            ca += 16 * caixas;
        }

        xi = ca / 7;

        return cafe(p + 1, ca, xi);
    }
}

int main(void)
{
    cafe(1, 0, 0);


    return 0;
}