#include <stdio.h>
#include <math.h>

void calculo(double n, int count, double soma, int p)
{
    if (count > n)
    {
        printf("S: %.2lf\n", soma);
        return;
    }

    else
    {
        // Ímpar
        if (count % 2 == 1)
        {
            soma += count / pow(2, count-1);
        }

        // Par
        else
        {
            soma += pow(2, count-1) / (3 * p);
            p++;
        }

        calculo(n, count + 1, soma, p);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    calculo(n, 1, 0, 1);

    return 0;
}