#include <stdio.h>

int main(void)
{
    int n, jo, r;
    scanf("%d %d %d", &n, &jo, &r);

    int tabuleiro[n], sapos[jo];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }

    for (int i = 0; i < jo; i++)
    {
        sapos[i] = 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < jo; j++)
        {
            int v;
            scanf("%d", &v);

            sapos[j] += v;

            while (sapos[j] > (n - 1))
            {
                sapos[j] -= n;
            }

            while (sapos[j] < 0)
            {
                sapos[j] += n;
            }

            sapos[j] += tabuleiro[sapos[j]];

            while (sapos[j] > (n - 1))
            {
                sapos[j] -= n;
            }

            while (sapos[j] < 0)
            {
                sapos[j] += n;
            }
        }
    }

    for (int i = 0; i < jo; i++)
    {
        printf("%d\n", sapos[i]);
    }

    return 0;
}