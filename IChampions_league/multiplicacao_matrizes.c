#include <stdio.h>

int main(void)
{
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);

    int ma[n - 1][m - 1], mb[m - 1][o - 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    }

    int mc[n - 1][o - 1];
    int aux = 0;

    for (int i = 0; i < n; i++)
    {
        aux = 0;
        int j = 0;

        for (j = 0; j < o; j++)
        {
            aux += ma[i][j] * mb[j][i];
        }

        mc[i][j] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d", mc[i][j]);
        }
        printf("\n");
    }


    return 0;
}