// Incluindo bibliotecas
#include <stdio.h>


//-----------------------------------------------------------------------------------------//


// Funções que vou usar
int eh_primo(int x, int count);
int fatorial(int z);
int proximo_primo(int y);
double soma(int n, int count, double sum);


//-----------------------------------------------------------------------------------------//


int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0.00\n");
    }
    else
    {
        double sum = soma(n, 1, 0);
        printf("%.2lf\n", sum);
    }
}


//-----------------------------------------------------------------------------------------//


int eh_primo(int x, int count)
{
    if (count > x / 2)
    {
        return 1;
    }

    else
    {
        if (x % count == 0)
        {
            return 0;
        }

        else
        {
            return eh_primo(x, count + 1);
        }
    }

}


//-----------------------------------------------------------------------------------------//


int fatorial(int z)
{
    if (z == 1 || z == 0)
    {
        return 1;
    }
    else
    {
        return z * fatorial(z - 1);
    }
}


//-----------------------------------------------------------------------------------------//


int proximo_primo(int y)
{
    if (eh_primo(y, 2))
    {
        return y;
    }
    else
    {
        return proximo_primo(y + 1);
    }
}


//-----------------------------------------------------------------------------------------//


double soma(int n, int count, double sum)
{
    int fat = fatorial(count);
    int pp = proximo_primo(count);

    if (count == n)
    {
        printf("%d!/%d\n", count, pp);
        sum += ((double)fat / pp);
        return sum;
    }

    else
    {
        printf("%d!/%d + ", count, pp);
        sum += ((double)fat / pp);
        return soma(n, count + 1, sum);
    }
}