#include <stdio.h>

int fat(int n);

int main(void)
{
    while (1)
    {
        int n;
        scanf("%d", &n);

        if (n == -1)
        {
            break;
        }

        printf("%d\n", fat(n));
    }

    return 0;
}


int fat(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n-1);
    }
}