#include <stdio.h>

int moedas(int d, int m, int x, int y, int count, int lado0, int ladoatual)
{
    if (d == count)
    {
        return m;
    }

    char di;
    scanf(" %c", &di);

    if (di == 'D')
    {
        x++;
        ladoatual = y - x;
    }
    else
    {
        y++;
        ladoatual = y - x;
    }
    
    if (lado0 > 0 && ladoatual < 0)
    {
        m++;
    }
    else if (lado0 < 0 && ladoatual > 0)
    {
        m++;
    }

    if (ladoatual != 0)
    {
        lado0 = ladoatual;
    }
    
    count++;

    return moedas(d, m, x, y, count, lado0, ladoatual);
}

int main(void)
{
    int dias;
    scanf("%d", &dias);

    printf("%d\n", moedas(dias, 0, 0, 0, 0, 0, 0));



    return 0;
}