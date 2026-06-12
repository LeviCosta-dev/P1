#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    int apostas[n][10];
    int tam[n];

    for (int i = 0; i < n; i++)
    {
        tam[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char c = 'a';
        int j = 0;

        while(c != '\n')
        {
            scanf("%d", &apostas[i][j]);
            tam[i]++;
            j++;
            c = getchar();
        }
    }

    char c = 'a';

    int resultado[6];
    for (int i = 0; i < 6; i++)
    {        
        scanf("%d", &resultado[i]);
        c = getchar();
        
    }

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        int venceu = 1;
        for (int j = 0; j < 6; j++)
        {
            int achou = 0;
            for (int k = 0; k < tam[i]; k++)
            {
                
                if (apostas[i][k] == resultado[j])
                {
                    achou = 1;
                }
            }

            if (!achou)
            {
                venceu = 0;
            }
        }

        if (venceu)
        {
            num++;
        }
    }

    printf("Total de ganhadores: %d\n", num);


    return 0;
}