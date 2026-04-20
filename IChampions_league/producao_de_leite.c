// Incluindo Bibliotecas
#include <math.h>
#include <stdio.h>


//-----------------------------------------------------------------------------------------//


// Funções que vou usar
int eh_coprimo(int x, int y);
int eh_primo(int x, int count);
long long fatorial(int z);
int mdc(int n1, int n2);
void producao(int pdk, int pdo, double ptk, double pto, int turno, int dias, int count);
int somatorio(long long n);


//-----------------------------------------------------------------------------------------//


int main(void)
{
    int dias, pdk, pdo;
    scanf("%d %d %d", &dias, &pdk, &pdo);

    producao(pdk, pdo, 0, 0, 1, dias, 1);


    return 0;
}


//-----------------------------------------------------------------------------------------//


int eh_coprimo(int x, int y)
{
    return mdc(x, y) == 1;
}


//-----------------------------------------------------------------------------------------//


int eh_primo(int x, int count)
{
    if (x <= 1)
    {
        return 0;
    }

    if (count > sqrt(x))
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


long long fatorial(int z)
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


//-----------------------------------------------------------------------------------------//


// Turno 1: Kcaj
// Turno 2: Ordep (dia++)
void producao(int pdk, int pdo, double ptk, double pto, int turno, int dias, int count)
{
    if (count > dias)
    {
        if (ptk > pto)
        {
            printf("Kcaj Ganhou!\n%.2lf\n", ptk);
        }
        else
        {
            printf("Ordep Ganhou!\n%.2lf\n", pto);
            return;
        }
    }
    else
    {
        // Turnp Kcaj
        if (turno)
        {
            ptk += pdk;
            pto += pdo;

            if (eh_primo(count, 2))
            {
                ptk += pdk * 0.05;
            }

            if (eh_primo(somatorio(fatorial(count)), 2))
            {
                ptk += pto * 0.1;
                pto = pto * 0.9;
            }

            return producao(pdk, pdo, ptk, pto, 0, dias, count);
        }

        // Turno Ordep
        else
        {
            double co = 0;
            co += pdo;

            if (pdo % somatorio(fatorial(count)) == 0)
            {
                co += 30;
            }

            if (eh_coprimo(pdo, count))
            {
                co += ptk * 0.1;
                ptk = ptk * 0.9;
            }

            co -= pdo;
            
            return producao(pdk, pdo, ptk, pto + co, 1, dias, count + 1);
        }
    }
}


//-----------------------------------------------------------------------------------------//


int somatorio(long long n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) + somatorio(n / 10);
    }
}