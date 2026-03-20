#include <stdio.h>

int somas(int n, int soma);

int main(void)
{
    int qnt, res;
    scanf("%d", &qnt);

    res = somas(qnt, 0);

    printf("%d\n", res);


    return 0;
}

//------------------------------------------------------------------//

int somas(int n, int soma)
{
    if (n == 0)
    {
        return soma;
    }
    else
    {
        int num;
        scanf("%d", &num);

        soma += num;

        return somas(n-1, soma);
    }
}