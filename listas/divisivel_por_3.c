#include <stdio.h>

int qnt(int n, int d, int q)
{
    if (d > n)
    {
        return q;
    }
    else
    {
        if (n % d == 0 && d % 3 == 0)
        {
            return qnt(n, d + 1, q + 1);
        }
        else
        {
            return qnt(n, d + 1, q);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int div = qnt(n / 2, 1, 0);

    if (div > 0)
    {
        printf("%d\n", div);
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }


    return 0;
}