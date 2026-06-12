#include <stdio.h>

int main(void)
{
    int m[3][3];
    int soma = 0;
    int fora_diagonal = 0;
    int menor;
    int divisor = 0;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
            if (i == 0 & j == 0)
            {
                menor = m[0][0];
            }

            if (menor > m[i][j])
            {
                menor = m[i][j];
            }

            if (m[i][j] > 0)
            {
                soma += m[i][j];
                divisor++;
            }

            fora_diagonal += m[i][j];
        }
    }

    fora_diagonal -= (m[0][0] + m[1][1] + m[2][2]);
    double media = soma / (double) divisor;
    int delta;
    if (menor % 2 == 0)
    {
        delta = 1;
    }

    else
    {
        delta = 0;
    }


    printf("%.2lf %d %d %d\n", media, menor, delta, fora_diagonal);


    return 0;
}