#include <stdio.h>

int main(void)
{
    int h1, h2, h3, h4, h5, quartos = 1, aux;
    scanf("%d %d %d %d %d", &h1, &h2, &h3, &h4, &h5);

    // Ordenando as alturas
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
    if (h1 < h5)
    {
        aux = h1;
        h1 = h5;
        h5 = aux;
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
    if (h2 < h5)
    {
        aux = h2;
        h2 = h5;
        h5 = aux;
    }
    if (h3 < h4)
    {
        aux = h3;
        h3 = h4;
        h4 = aux;
    }
    if (h3 < h5)
    {
        aux = h3;
        h3 = h5;
        h5 = aux;
    }
    if (h4 < h5)
    {
        aux = h4;
        h4 = h5;
        h5 = aux;
    }
    
   // Vendo quantos quartos precisa
    if (h1 - h2 == 1 || h2 - h3 == 1 || h3 - h4 == 1 || h4 - h5 == 1)
    {
        quartos++;
    }

    printf("%d\n", quartos);


    return 0;
}