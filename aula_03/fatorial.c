#include <stdio.h>

int fatorial(int x);

int main(void)
{
    int x, res;
    
    scanf("%d", &x);

    res = fatorial(x);
    
    printf("%d\n", res);
    
    
    return 0;
}


//---------------------------------------------------------------------------------------//


int fatorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x -1);
    }
}