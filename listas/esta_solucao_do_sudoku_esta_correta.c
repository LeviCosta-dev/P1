#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int qwerty = 0; qwerty < n; qwerty++)
    {
        int jogo[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &jogo[i][j]);
            }
        }

        int invalido = 0;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                for (int k = j + 1; k < 9; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }

                    if (jogo[j][i] == jogo [k][i])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        // Quadrados
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 3; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 6; i < 9; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 3; i < 6; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 3; i < 6; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 6; i < 9; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        for (int i = 6; i < 9; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                for (int k = j + 1; k < 3; k++)
                {
                    if (jogo[i][j] == jogo[i][k])
                    {
                        invalido = 1;
                    }
                }
            }
        }

        if (invalido)
        {
            printf("Instancia %d\nNAO\n\n", qwerty + 1);
        }

        else
        {
            printf("Instancia %d\nSIM\n\n", qwerty + 1);
        }
    }
}