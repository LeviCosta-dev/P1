#include <stdio.h>

int main()
{
    double salario;

    do 
    {
        scanf("%lf", &salario);
    } 
    while (salario < 0);

    if (salario <= 1000)
    {
        printf("%.2lf\n", salario * 1.15);
    }

    else if(salario <=2000)
    {
        printf("%.2lf\n", salario * 1.1);
    }

    else
    {
        printf("%.2lf\n", salario * 1.05);
    }


    return 0;
}