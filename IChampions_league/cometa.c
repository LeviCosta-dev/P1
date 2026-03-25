#include <stdio.h>

int main(void)
{
    int ano;
    scanf("%d", &ano);

    if (ano >= 2010 && ano < 2062)
    {
        printf("2062\n");
    }
    for (int i = 0; i < 10000; i += 76)
    {
        if (ano >= 2062 + i  && ano < 2138 + i)
        {
            printf("%d", 2138 + i);
        }
    }

    return 0;
}