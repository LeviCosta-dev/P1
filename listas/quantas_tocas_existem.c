#include <stdio.h>


//----------------------------------------------------------------------------------------//


void ler(int v[], int i, int n);
int tocas(int v[], int visitado[], int i, int total, int tam);
void visitar(int v[], int visitado[], int i);
void zerar(int v[], int tam, int i);


//----------------------------------------------------------------------------------------//


int main(void)
{
    int n;
    scanf("%d", &n);

    int buracos[n], visitado[n];
    ler(buracos, 0, n);
    zerar(visitado, n, 0);

    printf("%d\n", tocas(buracos, visitado, 0, 0, n));


    return 0;
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


int tocas(int v[], int visitado[], int i, int total, int tam)
{
    if (i == tam)
    {
        return total;
    }

    else
    {
        if (visitado[i] == 0)
        {
            visitar(v, visitado, i);
            return tocas(v, visitado, i + 1, total + 1, tam);
        }
        else
        {
            return tocas(v, visitado, i + 1, total, tam);
        }
    }
}


//----------------------------------------------------------------------------------------//


void visitar(int v[], int visitado[], int i)
{
    if (visitado[i] == 1)
    {
        return;
    }
    else
    {
        visitado[i] = 1;

        visitar(v, visitado, v[i]);
    }
}


//----------------------------------------------------------------------------------------//


void zerar(int v[], int tam, int i)
{
    if (i == tam)
    {
        return;
    }

    else
    {
        v[i] = 0;
        zerar(v, tam, i + 1);
    }
}