#include <stdio.h>

int tam = 10;

//----------------------------------------------------------------------------------------//


void ler(int numeros[], int i);
int quantidade(int numeros[], int n, int i, int qnt);

//----------------------------------------------------------------------------------------//


int main(void)
{
    int numeros[10], n;
    ler(numeros, 0);

    scanf("%d", &n);

    printf("%d\n", quantidade(numeros, n, 0, 0));


    return 0;
}


//----------------------------------------------------------------------------------------//


void ler(int numeros[], int i)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%d", &numeros[i]);
        ler(numeros, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


int quantidade(int numeros[], int n, int i, int qnt)
{
    if (i == tam)
    {
        return qnt;
    }
    else
    {
        if (numeros[i] == n)
        {
            qnt ++;
        }

        return quantidade(numeros, n, i + 1, qnt);
    }
}