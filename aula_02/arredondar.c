#include <stdio.h>

double arredondar (double n);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    double n1, n2, n3, n4, n5;

    scanf("%lf%lf%lf%lf%lf", &n1, &n2, &n3, &n4, &n5);

    printf("\n\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n\n", arredondar(n1), arredondar(n2), arredondar(n3), arredondar(n4), arredondar(n5));
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double arredondar (double n)
{
    int inteiro = n * 100;
    double ret = inteiro / 100.0;

    return ret;
}