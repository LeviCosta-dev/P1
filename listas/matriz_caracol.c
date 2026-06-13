#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int m[n][n];

    // Criando limites de leitura
    int topo = 0;
    int baixo = n - 1;
    int esquerda = 0;
    int direita = n - 1;

    while (topo <= baixo && esquerda <= direita)
    {
        for (int i = topo; i <= baixo; i++)
        {
            scanf("%d", &m[i][esquerda]);
        }

        esquerda++;

        if (topo > baixo || esquerda > direita)
        {
            break;
        }

        for (int j = esquerda; j <= direita; j++)
        {
            scanf("%d", &m[baixo][j]);
        }

        baixo--;

        if (topo > baixo || esquerda > direita)
        {
            break;
        }

        for (int i = baixo; i >= topo; i--)
        {
            scanf("%d", &m[i][direita]);
        }

        direita--;

        if (topo > baixo || esquerda > direita)
        {
            break;
        }

        for (int j = direita; j >= esquerda; j--)
        {
            scanf("%d", &m[topo][j]);
        }

        topo++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\n", m[i][j]);
        }
    }

    
    return 0;
}