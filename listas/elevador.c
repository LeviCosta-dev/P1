#include <stdio.h>

void ler (int qnt, int pessoas, int vf, int max)
{
    if (vf)
    {
        printf("S");
        return;
    }

    if (qnt == 0)
    {
        if (vf)
        {
            printf("S\n");
        }

        else
        {
            printf("N\n");
        }
    }

    else
    {
        int s, e;
        scanf("%d %d", &s, &e);

        pessoas -= s;
        pessoas += e;

        if (pessoas > max)
        {
            vf = 1;
        }

        return ler(qnt - 1, pessoas, vf, max);
    }
}

int main(void)
{
    int leituras, capacidade;
    scanf("%d %d", &leituras, &capacidade);

    ler(leituras, 0, 0, capacidade);

    return 0;
}