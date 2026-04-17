#include <stdio.h>

void tri(int n, int count)
{
    if (count * (count + 1) * (count + 2) > n)
    {
        printf("Falso\n");
        return;
    }
    else
    {
        if (count * (count + 1) * (count + 2) == n)
        {
            printf("%d * %d * %d = %d\n", count, count + 1, count + 2, n);
            printf("Verdadeiro\n");
            return;
        }
        else
        {
            return tri(n, count + 1);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    tri(n, 1);


    return 0;
}