#include <stdio.h>

int main(void)
{
    int n, imp1, imp2;

    scanf("%d", &n);

    imp1 = n % 10;
    imp2 = n / 10;

    if (imp1 != 0)
    {
        printf("%d%d", imp1, imp2);
    }
    else
    {
        printf("%d", imp2);
    }

    return 0;
}