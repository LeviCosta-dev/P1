#include <stdio.h>

int main(void)
{
    int p, e;
    scanf("%d %d", &p, &e);

    int votos[e][p];

    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &votos[i][j]);
        }
    }

    int freq[p];

    for (int i = 0; i < p; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (votos[i][j] == 1)
            {
                freq[j]++;
            }
        }
    }

    for (int i = 0; i < p; i++)
    {
        printf("Princesa %d: %d voto(s)\n", i + 1, freq[i]);
    }


    return 0;
}