#include <stdio.h>

int main(void)
{
    int a, b, d, h, l, aux;
    scanf("%d %d %d %d %d", &a, &b, &d, &h, &l);

    // Garantindo que a > b > d e h > l
    if (d > b)
    {
        aux = d;
        d = b;
        b =aux;
    }

    if (d > a)
    {
        aux = d;
        d = a;
        a = aux;
    }

    if (b > a)
    {
        aux = b;
        b = a;
        a = aux;
    }

    if (l > h)
    {
        aux = l;
        l = h;
        h = aux;
    }
    
    if (b <= h && d <= l)
    {
        printf("S\n");
    }

    else
    {
        printf("N\n");
    }


    return 0;
}