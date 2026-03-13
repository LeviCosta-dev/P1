#include <stdio.h>
#include <stdlib.h>

int produto (int x, int y);

int main(void)
{
    printf("%d\n", produto(4,5));
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////

int produto (int x, int y)
{
    return x * y;
}