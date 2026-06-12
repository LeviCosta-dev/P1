#include <stdio.h>


int validar(int golpe, int m[][3])
{
    if (golpe == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                {
                    if (m[i][j] != 0)
                    {
                        return 0;
                    }
                }

            }
        }

        return 1;
    }

    if (golpe == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (!((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0)))
                {
                    if (m[i][j] != 0)
                    {
                        return 0;
                    }
                }

            }
        }

        return 1;
    }
}


// 0 - golpe inválido
// 1 - golpe com diagonal primária
// 2 - golpe com diagonal secundária
int golpe(int m[][3])
{
    if (m[0][0] == 1 && m[1][1] == 1 && m[2][2] == 1 && validar(1, m))
    {
        return 1;
    }

    else if (m[0][2] == 1 && m[1][1] == 1 && m[2][0] == 1 && validar(2, m))
    {
        return 2;
    }

    else
    {
        return 0;
    }
}


int main(void)
{
    int vl, vd;
    scanf("%d %d", &vl, &vd);

    getchar();

    for (int r = 0; r < 10; r++)
    {

        if (vl <= 0 && vd <= 0 )
        {
            printf("Houve empate.\n");
            return 0;
        }

        else if (vl <= 0)
        {
            printf("Darth Vader venceu.\n");
            return 0;
        }

        else if (vd <= 0)
        {
            printf("Luke Skywalker venceu.\n");
            return 0;
        }

        int gl[3][3], gd[3][3];

        if (scanf("%d", &gl[0][0]) != 1)
        {
            break;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (!(i == 0 && j == 0))
                {
                    scanf("%d", &gl[i][j]);
                }
            }
        }

        getchar();

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &gd[i][j]);
            }
        }

        int tgl = golpe(gl);
        int tgd = golpe(gd);

        if (tgl != 0 && tgd != 0)
        {
            if (tgl == tgd)
            {
                vl -= 15;
                vd -= 15;
            }
        }

        else if (tgl == 0)
        {
            vl -= 15;
        }

        else if (tgd == 0)
        {
            vd -= 15;
        }
    }

    if (vl == vd)
    {
        printf("Houve empate.\n");
        return 0;
    }

    else if (vl < vd)
    {
        printf("Darth Vader venceu.\n");
        return 0;
    }

    else if (vd < vl)
    {
        printf("Luke Skywalker venceu.\n");
        return 0;
    }
}