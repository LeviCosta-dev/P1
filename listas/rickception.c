#include <stdio.h>

int conta(int n, int t, int count)
{
    if (count == t)
    {
        return n;
    }
    else
    {
        if (count % 2 == 0)
        {
            return conta(n + 3, t, count + 1);
        }
        else
        {
            return conta(n + (n % 5), t, count + 1);
        }
    }
}

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);

    printf("%d\n", conta(n, t, 0));


    return 0;
}