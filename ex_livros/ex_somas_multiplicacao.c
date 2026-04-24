#include <stdio.h>

int somas_sucessivas(int n1, int n2, int count)
{
    if (count >= n2)
    {
        return 0;
    }
    else
    {
        return n1 + somas_sucessivas(n1, n2, count + 1);
    }
}


int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int soma = somas_sucessivas(n1, n2, 0);
    printf("%d\n", soma);

    return 0;
}