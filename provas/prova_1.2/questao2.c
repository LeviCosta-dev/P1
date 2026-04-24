#include <stdio.h>

void chamar(int n, int count)
{
    if (count > n)
    {
        return;
    }
    else
    {
        int num;
        scanf("%d", &num);
        decodificar(num, 0, 1);

        return chamar(n, count + 1);
    }
}

void decodificar(int n, int sum, int count)
{
    if (count > n)
    {
        if (sum < 0)
        {
            sum = sum * (-1);
        }

        printf("%c", sum + 65);
        return;
    }

    else
    {
        if (count % 3 == 1)
        {
            sum += count;
        }
        else if (count % 3 == 2)
        {
            sum += count * (count + 1);
        }
        else if (count % 3 == 0)
        {
            sum -= count * count;
        }

        return decodificar(n, sum, count + 1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    chamar(n, 1);

    return 0;
}