#include <stdio.h>

int main(void)
{
    while (1)
    {
        int n, primo = 1;
        scanf("%d", &n);

        if (n == -1)
        {
            break;
        }

        if (n <= 1)
        {
            primo = 0;
        }

        for (int i = 2; i <= n / 2; i++)
        {
           if (n % i == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            printf("1\n");
        }

        else
        {
            printf("0\n");
        }
    }


    return 0;
}