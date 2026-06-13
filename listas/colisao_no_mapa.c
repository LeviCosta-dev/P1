#include <stdio.h>

int main(void)
{
    int tami, tamj;
    scanf("%d %d", &tami, &tamj);

    int m[tami][tamj];

    for (int i = 0; i < tami; i++)
    {
        for (int j = 0; j < tamj; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    
    int comandos;
    scanf("%d", &comandos);

    char c[comandos];
    
    for (int i = 0; i < comandos; i++)
    {
        scanf(" %c", &c[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 0; i < comandos; i++)
    {
        if (c[i] == 'D')
        {
            if (y + 1 < tamj)
            {
                if (m[x][y + 1] == 1)
                {
                    y++;
                }
            }
        }

        else if (c[i] == 'E')
        {
            if (y - 1 >= 0)
            {
                if (m[x][y - 1] == 1)
                {
                    y--;
                }
            }
        }

        else if (c[i] == 'C')
        {
            if (x - 1 >= 0)
            {
                if (m[x - 1][y] == 1)
                {
                    x--;
                }
            }
        }

        else if (c[i] == 'B')
        {
            if (x + 1 < tami)
            {
                if (m[x + 1][y] == 1)
                {
                    x++;
                }
            }
        }
    }

    printf("(%d,%d)\n", x, y);



    return 0;
}