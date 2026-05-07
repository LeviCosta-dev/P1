#include <stdio.h>

int main(void)
{
    int qnt = 0;
    double p1, p2, p3, p4, p5, pd1, pd2, pd3, pd4, pd5;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &p1, &pd1, &p2, &pd2, &p3, &pd3, &p4, &pd4, &p5, &pd5);

    if (p1 * 0.8 >= pd1)
    {
        qnt++;
    }

    if (p2 * 0.8 >= pd2)
    {
        qnt++;
    }

    if (p3 * 0.8 >= pd3)
    {
        qnt++;
    }

    if (p4 * 0.8 >= pd4)
    {
        qnt++;
    }

    if (p5 * 0.8 >= pd5)
    {
        qnt++;
    }

    printf("%d\n", qnt);


    return 0;
}