#include <stdio.h>
#include <math.h>

int somatorio(int n);

int main(void)
{
    int x, soma;

    scanf("%d", &x);

    soma = somatorio(x);

    printf("%d\n", soma);


    return 0;
}

//-----------------------------------------------------------------------------------------//

int somatorio(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return pow(2, n) + somatorio(n-1);
    }
}