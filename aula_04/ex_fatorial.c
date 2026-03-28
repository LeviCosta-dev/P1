#include <stdio.h>

int fatorial(int f);

int main(void)
{
    while(1)
    {
        int n, fat;
        scanf("%d", &n);

        if (n == -1)
        {
            break;
        }

        fat = fatorial(n);

        printf("%d\n", fat);
    }
}


//---------------------------------------------------------------------------------------//


int fatorial(int f)
{
    if (f == 1)
    {
        return 1;
    }
    else
    {
        return f * fatorial(f-1);
    }
}