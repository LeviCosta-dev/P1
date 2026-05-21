#include <stdio.h>


//----------------------------------------------------------------------------------------//


void achar_inicio(int arr[], int tam, int i, int m);
void contar(int i, int fim, int v[]);
void imprimir(int v[], int tam, int i);
void ler (int qnt, int i, int v[]);
int maior(int v[], int tam, int i, int m);
int percorrer(int arr[], int tam, int i, int m);
void sequencia(int arr[], int tam, int i, int m, int se, int c, int f);
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
    achar_inicio(sus, s, 0, m);
    sequencia(sus, s, 0, m, 0, 0, 0);
}


//----------------------------------------------------------------------------------------//


void achar_inicio(int arr[], int tam, int i, int m)
{
    if (i == tam)
    {
        return;
    }

    else
    {
        if (arr[i] == m)
        {
            int fim = percorrer(arr, tam, i, m);
            printf("%d %d\n", i, fim);
            achar_inicio(arr, tam, fim + 1, m);
        }
        else
        {
            achar_inicio(arr, tam, i + 1, m);
        }
    }
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


int percorrer(int arr[], int tam, int i, int m)
{
    if (i == tam)
    {
        return i - 1;
    }

    else
    {
        if (arr[i] == m)
        {
            return percorrer(arr, tam, i + 1, m);
        }
        else
        {
            return i - 1;
        }
    }
}


//----------------------------------------------------------------------------------------//


void sequencia(int arr[], int tam, int i, int m, int se, int c, int f)
{
    if (i == tam)
    {
        printf("maior sequencia: %d\n", se);
        printf("comeca em: %d\n", c);
        printf("termina em: %d\n", f);
        return;
    }

    else
    {
        if (arr[i] == m)
        {
            int fim = percorrer(arr, tam, i, m);
            int aux = fim - i + 1;
            if (aux > se)
            {
                se = aux;
                f = fim;
                c = i;
            }

            sequencia(arr, tam, fim + 1, m, se, c, f);
        }
        
        else
        {
            sequencia(arr, tam, i + 1, m, se, c, f);
        }
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