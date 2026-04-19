#include <stdio.h>

void soma(int r, int fi, int sem, int count, int sum);
void figura(int n, int count);

int main(void)
{
    int tipo;
    scanf("%d", &tipo);

    figura(tipo, 0);


    return 0;
}


void figura(int n, int count)
{
    if (count == n)
    {
        return;
    }
    else
    {
        int fi, s, r, ff;
        scanf("%d %d %d", &fi, &s, &r);

        soma(r, fi, s, 0, 0);

        return figura(n, count + 1);
    }
}


void soma(int r, int fi, int sem, int count, int sum)
{
    if (count == sem)
    {
        printf("%d\n", sum);
        return;
    }
    else
    {
        sum += fi + (r * count);
        return soma(r, fi, sem, count + 1, sum);
    }
}