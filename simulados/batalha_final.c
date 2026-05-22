#include <stdio.h>

void trocar(int *p)
{
    *p = 20;
}


int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%d | %p\n", n, &n);

    trocar(&n);

    printf("%d\n", n);


    return 0;
}