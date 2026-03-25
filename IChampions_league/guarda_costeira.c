#include <stdio.h>
#include <math.h>

int main(void)
{
    while (1)
    {
        int d, vf, vg;
        scanf("%d %d %d", &d, &vf, &vg);

        if (d == -1 && vf == -1 && vg == -1)
        {
            break;
        }

        if ((144 + d * d) * vf * vf <= 144 * vg * vg)
        {
            printf("S\n");
        }

        else
        {
            printf("N\n");
        }
    }


    return 0;
}