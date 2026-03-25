#include <stdio.h>

int main(void)
{
    while (1)
    {
        int h1, m1, h2, m2, tsono, t1, t2;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
        {
            break;
        }
        else 
        {
            t1 = h1 * 60 + m1;
            t2 = h2 * 60 + m2;

            if (t2 > t1)
            {
                tsono = t2 - t1;
            }
            else
            {
                tsono = 1440 - t1 + t2;
            }
        }

        printf("%d\n", tsono);
    }


    return 0;
}