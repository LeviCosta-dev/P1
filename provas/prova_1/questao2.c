#include <stdio.h>

int main(void)
{
    double b, a, l, pem, d, vel, ief;
    int p, n;
    char co, t;

    scanf("%lf %d %lf %lf %c %d %c", &b, &p, &a, &l, &co, &n, &t);


    vel = (p * a) / 10.0;

    if (t == 'M')
    {
        l = l * 0.85;
    }
    else if (t == 'G')
    {
        l = l * 1.20;
    }

    d = vel - l;

    if (d > 0)
    {
        if (co == 'S')
        {
            pem = d * d * 0.45;
        }
        else if (co == 'H')
        {
            pem = d * d * 0.15;
        }
        else
        {
            pem = d * d * 0.25;
        }
    }

    else
    {
        if (co == 'S')
        {
            pem = (l - vel) * 12.50;
        }
        else if (co == 'H')
        {
            pem = (l - vel) * 25;
        }
        else
        {
            pem = (l - vel) * 18;
        }
    }

    if (n >= 9)
    {
        pem = pem * 0.8;
    }
    else if (n < 5)
    {
        pem = pem * 1.15;
    }


    if (t == 'T')
    {
        pem = pem * 1.3;
    }

    ief = b + pem;

    printf("%.2lf\n", ief);
    if (ief > 200)
    {
        printf("DESTRUICAO TOTAL\n");
    }
    else if (ief >= 150)
    {
        printf("FALHA MECANICA IMINENTE\n");
    }
    else if (ief >= 70)
    {
        printf("RISCO MODERADO\n");
    }
    else
    {
        printf("DESEMPENHO OTIMIZADO\n");
    }

    return 0;

}