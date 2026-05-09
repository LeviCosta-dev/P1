#include <stdio.h>


//----------------------------------------------------------------------------------------//


void ler(int numeros[], int i);
int procurar_maior(int numeros[], int i, int maior);
int procurar_menor(int numeros[], int i, int menor);


//----------------------------------------------------------------------------------------//


int main(void)
{
    int numeros[6];
    ler(numeros, 0);

    int ma = procurar_maior(numeros, 0, numeros[0]);
    int me = procurar_menor(numeros, 0, numeros[0]);

    printf("%d\n%d\n", me, ma);


    return 0;
}


//----------------------------------------------------------------------------------------//


void ler(int numeros[], int i)
{
    if (i == 6)
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


int procurar_maior(int numeros[], int i, int maior)
{
    if (i == 6)
    {
        return maior;
    }
    else
    {
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }

        return procurar_maior(numeros, i + 1, maior);
    }
}


//----------------------------------------------------------------------------------------//


int procurar_menor(int numeros[], int i, int menor)
{
    if (i == 6)
    {
        return menor;
    }
    else
    {
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }

        return procurar_menor(numeros, i + 1, menor);
    }
}