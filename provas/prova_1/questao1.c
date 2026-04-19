#include <stdio.h>

int main(void)
{
    double valor, pago, troco, troc;
    int n20 = 0, n10 = 0, n5 = 0, m1 = 0, m50 = 0;
    scanf("%lf %lf", &valor, &pago);

    troco = pago - valor;
    troc = troco;

    if (troco >= 20)
    {
        n20++;
        troco -= 20;
    }
    if (troco >= 20)
    {
        n20++;
        troco -= 20;
    }
    if (troco >= 10)
    {
        n10++;
        troco -= 10;
    }
    if (troco >= 10)
    {
        n10++;
        troco -= 10;
    }
    if (troco >= 5)
    {
        n5++;
        troco -= 5;
    }
    if (troco >= 5)
    {
        n5++;
        troco -= 5;
    }
    if (troco >= 1)
    {
        m1++;
        troco -= 1;
    }
    if (troco >= 1)
    {
        m1++;
        troco -= 1;
    }
    if (troco >= 0.50)
    {
        m50++;
        troco -= 0.50;
    }
    if (troco >= 0.50)
    {
        m50++;
        troco -= 0.50;
    }

    printf("Troco: %.2lf\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nMoedas de 1: %d\nMoedas de 0.50: %d\n", troc, n20, n10, n5, m1, m50);


    return 0;
}