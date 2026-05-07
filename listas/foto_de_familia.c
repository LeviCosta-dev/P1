#include <stdio.h>

int main(void)
{
    double h1, h2, h3, h4, aux;
    scanf("%lf %lf %lf %lf", &h1, &h2, &h3, &h4);

    if (h1 < h2)
    {
        aux = h1;
        h1 = h2;
        h2 = aux;
    }

    if (h1 < h3)
    {
        aux = h1;
        h1 = h3;
        h3 = aux;
    }

    if (h1 < h4)
    {
        aux = h1;
        h1 = h4;
        h4 = aux;
    }

    if (h2 < h3)
    {
        aux = h2;
        h2 = h3;
        h3 = aux;
    }

    if (h2 < h4)
    {
        aux = h2;
        h2 = h4;
        h4 = aux;
    }

    if (h3 < h4)
    {
        aux = h3;
        h3 = h4;
        h4 = aux;
    }

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", h4, h2, h1, h3);


    return 0;
}