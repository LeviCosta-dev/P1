#include <stdio.h>

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int quebra = 1;
    for (int i = 1; i <= y; i += z)
    {
        if (quebra == x)
        {
            printf("%d\n", i);
            quebra = 1;
        }
        else
        {
            printf("%d ", i);
            quebra++;
        }
    }


    return 0;
}