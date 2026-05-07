#include <stdio.h>

int main(void)
{
    double arvore, e1, e2, e3;
    int q1, q2, q3;

    scanf("%lf", &arvore);
    scanf("%d %lf", &q1, &e1);
    scanf("%d %lf", &q2, &e2);
    scanf("%d %lf", &q3, &e3);

    double valor = arvore + (q1 * e1) + (q2 * e2) + (q3 * e3);

    printf("%.2lf\n%.2lf\n", valor, valor / 21);


    return 0;
}