#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int quebra = 1;
    for (int i = 1; i <= y; i++)
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