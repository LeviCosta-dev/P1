#include <stdio.h>
#include <string.h>

int main(void)
{
    char n1[10000], n2[10000], soma[10001];

    scanf("%s %s", n1, n2);

    int t1 = strlen(n1) - 1;
    int t2 = strlen(n2) - 1;
    int i = 0;
    int base = 0;
    
    while (t1 >= 0 || t2 >= 0)
    {
        int num1 = 0, num2 = 0;

        if (t1 >= 0)
        {
            num1 = n1[t1] - '0';
        }

        if (t2 >= 0)
        {
            num2 = n2[t2] - '0';
        }

        int s = (num1 + num2 + base) % 10;

        soma[i] = s + '0';

        base = (num1 + num2 + base) / 10;
        i++;
        t1--;
        t2--;
    }

    if (base)
    {
        soma[i++] = base + '0';
    }

    int len = strlen(soma) - 1;
    for (int count = len; count >= 0; count--)
    {
        printf("%c", soma[count]);
        if (count == 0)
        {
            printf("\n");
        }
    }


    return 0;

}
