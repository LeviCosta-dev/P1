#include <stdio.h>

double calculo(int d, double p, int i)
{
    if (i > 3)
    {
        return p;
    }

    else
    {
        double de;

        if (d == 0)
        {
            de = p - p * 0.75;
        }

        if (d == 1)
        {
            de = p - p * 0.8;
        }

        if (d == 2)
        {
            de = p - p * 0.82;
        }
        
        if (d == 3)
        {
            de = p - p * 0.85;
        }
        
        if (d == 4)
        {
            de = p - p * 0.88;
        }
        
        if (d == 5)
        {
            de = p - p * 0.9;
        }

        if (p <= 100)
        {
            de = de / 2;
        }

        if (p - de > 45)
        {
            p -= de;
        }

        return calculo(d, p, i + 1);
    }
}


void ler(int dificuldade[], double preco[], int i, int n)
{
    if (i == n)
    {
        return;
    }

    scanf("%d %lf", &dificuldade[i], &preco[i]);

    printf("Jogo[%d] = R$%.2lf\n", i, calculo(dificuldade[i], preco[i], 1));

    ler(dificuldade, preco, i + 1, n);
}


int main(void)
{
    int n;
    scanf("%d", &n);

    int dificuldade[n];
    double preco[n];

    ler(dificuldade, preco, 0, n);


    return 0;
}