#include <stdio.h>

void imprimir(int n, int imp);

int main(void)
{
    int num;

    scanf("%d", &num);
    printf("\n");

    imprimir(num, 1);

    printf("\n");


    return 0;
}

//-------------------------------------------------------------------------------------------//

void imprimir(int n, int imp)
{
    if (n == imp)
    {
        printf("%d\n", n);
    }
    else
    {
        printf("%d\n", imp);
        imp++;
        imprimir(n, imp);
    }
}