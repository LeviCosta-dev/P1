#include <stdio.h>
#include <math.h>

int acima_da_media(double n[], int tam);
double desvio_padrao(double n[], int tam);
double media(double n[], int tam);

//-------------------------------------------------------------------------------------------------------------------//

int main(void)
{
    // Declarando as variáveis que vou usar
    int tam = 0, am;
    double num[10000], aux, m, dp;

    // Atribuindo os valores enquanto o usuário não digita -1
    do
    {
        scanf("%lf", &aux);
        if (aux != -1)
        {
            num[tam] = aux;
            tam++;
        }

    } while (aux != -1 && tam < 10000);
    
    // Atribuindo os valores das funções à variáveis
    m = media(num, tam);
    dp = desvio_padrao(num, tam);
    am = acima_da_media(num, tam);

    // Saída
    printf("%.2lf\n%.2lf\n%d\n", m, dp, am);


    return 0;
}


//-------------------------------------------------------------------------------------------------------------------//


// Função para calcular a média
double media(double n[], int tam)
{
    int i;
    double m, soma = 0;

    for (i = 0; i < tam; i++)
    {
        soma += n[i];
    }

    m = soma / tam;

    return m;
}


//-------------------------------------------------------------------------------------------------------------------//


// Função para calcular o desvio padrão
double desvio_padrao(double n[], int tam)
{
    double dp, m, somaQ = 0;
    m = media(n, tam);

    for (int i = 0; i < tam; i++)
    {
        somaQ += pow((m - n[i]), 2);
    }

    somaQ = somaQ / (tam - 1);

    dp = sqrt(somaQ);

    return dp;
}

//-------------------------------------------------------------------------------------------------------------------//


int acima_da_media(double n[], int tam)
{
    double m = media(n, tam);
    int am = 0;

    for (int i = 0; i < tam; i++)
    {
        if (n[i] > m)
        {
            am++;
        }
    }

    return am;
}