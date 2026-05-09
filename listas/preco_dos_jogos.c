#include <stdio.h>

double calculo(int d, double p, int i)
{
    if (i > 3)
    {
        return p;
    }

    else
    {
        double de = 0;

        if (d == 0)
        {
            de = p * 0.25;
        }

        else if (d == 1)
        {
            de = p * 0.2;
        }

        else if (d == 2)
        {
            de = p * 0.18;
        }
        
        else if (d == 3)
        {
            de = p * 0.15;
        }
        
        else if (d == 4)
        {
            de = p * 0.12;
        }
        
        else if (d == 5)
        {
            de = p * 0.1;
        }

        if (p <= 100)
        {
            de = de / 2;
        }

        if (p > 45)
        {
            if (p - de < 45)
            {
                p = 45;
            }

            else 
            {
                p -= de;
            }
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