#include <stdio.h>

int main(void)
{
    int num[10], n_referencia, qnt = 0, pos = 0, maior = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    
    scanf("%d", &n_referencia);

    for (int i = 0; i < 10; i++)
    {
        if (num[i] >= maior)
        {
            pos = i;
            maior = num[i];
        }
        if (num[i] == n_referencia)
        {
            qnt++;
        }
    }
    
    printf("\nO maior numero esta na posicao %d", pos);
    printf("\n%d apareceu %d vezes.\n\n", n_referencia, qnt);

    return 0;
}