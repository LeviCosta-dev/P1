#include <stdio.h>

int main(void)
{
    while (1)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            break;
        }

        int tabuleiro[8][8], m1 = 0;

        x1--;
        y1--;
        x2--;
        y2--;

        if (x1 == x2 && y1 == y2)
        {
            printf("0\n");
        }
        else if (x1 == x2 || y1 == y2)
        {
            printf("1\n");
        }
        else
        {
            for (int i = 0; i < 8; i++)
            {
                if (x1 - i >= 0 && y1 - i >= 0)
                {
                    if (x2 == x1 - i && y2 == y1 - i)
                    {
                        m1 = 1;
                        break;
                    }
                }
                
                if (x1 + i <= 7 && y1 + i <= 7)
                {
                    if (x2 == x1 + i && y2 == y1 + i)
                    {
                        m1 = 1;
                        break;
                    }
                }
                
                if (x1 - i >= 0 && y1 + i <= 7)
                {
                    if (x2 == x1 - i && y2 == y1 + i)
                    {
                        m1 = 1;
                        break;
                    }
                }

                if (x1 + i <= 7 && y1 - i >= 0)
                {
                    if (x2 == x1 + i && y2 == y1 - i)
                    {
                        m1 = 1;
                        break;
                    }
                }
            }
            if (m1)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }


    return 0;
}