#include <math.h>
#include <stdio.h>

void converter(int n, int count, int necessario)
{
    if (count == -1)
    {
        return;
    }

    else
    {
        int base = pow(2, count);
        if (n >= base)
        {
            n -= base;
            printf("1\n");
            necessario = 1;
        }
        else if (necessario)
        {
            printf("0\n");
        }

        return converter(n, count - 1, necessario);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n");
    }
    else
    {
        converter(n, 30, 0);
    }

    return 0;
}