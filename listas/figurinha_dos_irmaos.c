#include <stdio.h>


//----------------------------------------------------------------------------------------//


int contar(int v[], int n, int soma, int tam, int i);
void ler(int v[], int i, int n);
void procurar(int v[], int n, int i, int s[], int j);


//----------------------------------------------------------------------------------------//


int main(void)
{
    int n, j, m, s;
    scanf("%d", &n);

    int figurinhas[n], fs[n];
    ler(figurinhas, 0, n);
    
    procurar(figurinhas, n, 0, fs, 0);

    j = contar(figurinhas, 2, 0, n, 0);
}


//----------------------------------------------------------------------------------------//


int contar(int v[], int n, int soma, int tam, int i)
{
    if (tam == i)
    {
        return soma;
    }

    else
    {
        if (v[i] % n == 0)
        {
            soma++;
        }

        return contar(v, n, soma, tam, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


void ler(int v[], int i, int n)
{
    if (i == n)
    {
        return;
    }

    else
    {
        scanf("%d", &v[i]);
        ler(v, i, n);
    }
}


//----------------------------------------------------------------------------------------//


void procurar(int v[], int n, int i, int s[], int j)
{
    if (n == i)
    {
        return;
    }

    else if (j < n)
    {
        if (v[i] == v[j])
        {
            s[j] = 0;
        }
        j++;
        procurar(v, n, i, s, j);
    }
    else
    {
        procurar(v, n, i + 1, s, 0);
    }
}