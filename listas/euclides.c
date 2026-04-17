#include <stdio.h>

void chama(int qnt);
int mdc(int n1, int n2);

int main(void)
{
    int qnt;
    scanf("%d", &qnt);

    chama(qnt);
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------//


void chama(int qnt)
{
    if (qnt == 0)
    {
        return;
    }
    else
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        printf("MDC(%d,%d) = %d\n", n1, n2, mdc(n1, n2));

        return chama(qnt - 1);
    }
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------//


int mdc(int n1, int n2)
{
    if (n1 % n2 == 0)
    {
        return n2;
    }
    else
    {
        return mdc(n2, n1 % n2);
    }
}