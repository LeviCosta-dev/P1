#include <stdio.h>

int dp(int n, int qnt);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d\n", dp(n, 0));

    return 0;
}


int dp(int n, int qnt)
{
    if (n == 0)
    {
        return qnt;
    }
    else if ((n % 10) % 2 == 0)
    {
        qnt++;
    }

    return dp(n / 10, qnt);
}