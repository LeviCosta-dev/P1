#include <stdio.h>


//----------------------------------------------------------------------------------------//


void contar(int i, int fim, int v[]);
void imprimir(int v[], int tam, int i);
void intervalo(int v[], int m, int tam, int i, int in, int f);
void ler (int qnt, int i, int v[]);
int maior(int v[], int tam, int i, int m);
void zerar(int v[], int tam, int i);


//----------------------------------------------------------------------------------------//


int main(void)
{
    int s, t;
    scanf("%d %d", &s, &t);

    int sus[s];
    zerar(sus, s, 0);
    ler(t, 0, sus);
    imprimir(sus, s, 0);
    int m = maior(sus, s, 0, sus[0]);
    printf("%d\n", m);
}


//----------------------------------------------------------------------------------------//


// Função que dado o intervalo, aumenta a pontuação dos suspeitos no intervalo
void contar(int i, int fim, int v[])
{
    if (i == fim)
    {
        v[i]++;
        return;
    }

    else
    {
        v[i]++;
        contar(i + 1, fim, v);
    }
}


//----------------------------------------------------------------------------------------//


// Função que imprime um array
void imprimir(int v[], int tam, int i)
{
    if (i == tam - 1)
    {
        printf("%d\n", v[i]);
        return;
    }

    else
    {
        printf("%d ", v[i]);
        imprimir(v, tam, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


void intervalo(int v[], int m, int tam, int i, int in, int f)
{
    if (tam == i)
    {
        return;
    }

    else
    {
        int aux = in;
        if (v[i] == m)
        {
            in = v[i];
        }
    }
}


//----------------------------------------------------------------------------------------//


// Função que escaneia dois valores e chama a função contar
void ler (int qnt, int i, int v[])
{
    if (i == qnt)
    {
        return;
    }

    else
    {
        int inicio, fim;
        scanf("%d %d", &inicio, &fim);
        contar(inicio, fim, v);
        ler (qnt, i + 1, v);
    }
}


//----------------------------------------------------------------------------------------//


// Função que retorna o maior número do array
int maior(int v[], int tam, int i, int m)
{
    if (i >= tam)
    {
        return m;
    }
    else
    {
        if (v[i] > m)
        {
            m = v[i];
        }

        return maior(v, tam, i + 1, m);
    }
}


//----------------------------------------------------------------------------------------//


// Função que zera todas as posições do array
void zerar(int v[], int tam, int i)
{
    if (tam == i)
    {
        return;
    }

    else
    {
        v[i] = 0;
        zerar(v, tam, i + 1);
    }
}