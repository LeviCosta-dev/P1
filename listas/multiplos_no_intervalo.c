#include <stdio.h>

void multiplos(int n, int a, int b, int ine)
{
    if (a > b)
    {
        if (ine == 0)
        {
            printf("INEXISTENTE\n");
        }
        return;
    }
    if (a % n == 0)
    {
        ine = 1;
        printf("%d\n", a);
    }
    return multiplos(n, a + 1, b, ine);
}

int main(void)
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    multiplos(n, a, b, 0);


    return 0;
}