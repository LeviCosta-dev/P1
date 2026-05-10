#include <stdio.h>


//----------------------------------------------------------------------------------------//


void copiar(int v[], int s[], int tam, int i);
int contar_j(int v[], int soma, int tam, int i);
int contar_m(int v[], int soma, int tam, int i);
void contar_serie(int v[], int j, int m, int tam, int i);
void ler(int v[], int i, int n);
void procurar(int v[], int n, int i, int s[], int j);


//----------------------------------------------------------------------------------------//


int main(void)
{
    int n, j, m, s;
    scanf("%d", &n);

    int figurinhas[n], fs[n];
    ler(figurinhas, 0, n);
    copiar(figurinhas, fs, n, 0);
    
    procurar(figurinhas, n, 0, fs, 1);

    j = contar_j(figurinhas, 0, n, 0);
    m = contar_m(figurinhas, 0, n, 0);

    printf("%d\n%d\n", j, m);

    contar_serie(fs, 0, 0, n, 0);


    return 0;
}


//----------------------------------------------------------------------------------------//


void copiar(int v[], int s[], int tam, int i)
{
    if (tam == i)
    {
        return;
    }
    else
    {
        s[i] = v[i];
        copiar(v, s, tam, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


int contar_j(int v[], int soma, int tam, int i)
{
    if (tam == i)
    {
        return soma;
    }

    else
    {
        if (v[i] % 2 == 0)
        {
            soma++;
        }

        return contar_j(v, soma, tam, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


int contar_m(int v[], int soma, int tam, int i)
{
    if (tam == i)
    {
        return soma;
    }

    else
    {
        if (v[i] % 2 != 0)
        {
            soma++;
        }

        return contar_m(v, soma, tam, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


void contar_serie(int v[], int j, int m, int tam, int i)
{
    if (i == tam)
    {
        if (j > m)
        {
            printf("%d\n", j);
        }
        else
        {
            printf("%d\n", m);
        }
    }

    else
    {
        if (v[i] % 2 == 0)
        {
            j += v[i];
        }
        else
        {
            m += v[i];
        }

        contar_serie(v, j, m, tam, i + 1);
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
        ler(v, i + 1, n);
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
        procurar(v, n, i, s, j + 1);
    }
    else
    {
        procurar(v, n, i + 1, s, i + 2);
    }
}