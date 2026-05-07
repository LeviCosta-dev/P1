#include <stdio.h>

void ler(int maior)
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("%d\n", maior);
        
        return;
    }

    if (n > maior)
    {
        maior = n;
    }

    ler(maior);
}

int main(void)
{
    ler(0);
}