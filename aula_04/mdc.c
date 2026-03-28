#include <stdio.h>


// De baixo para cima

/*int mdc(int a, int b, int max, int mdctemp);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b > a)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    int mdcc = mdc(a, b, 1, 2);

    printf("%d\n", mdcc);


    return 0;
}


//------------------------------------------------------------------------------------------//


int mdc(int a, int b, int max, int mdctemp)
{
    if (mdctemp > b)
    {
        return max;
    }
    
    else
    {
        if (a % mdctemp == 0 && b % mdctemp == 0)
        {
            max = mdctemp;
            return mdc(a, b, mdctemp, mdctemp + 1);
        }
        else
        {
            return mdc(a, b, max, mdctemp + 1);
        } 
    }
}*/



// De cima para baixo

int mdc(int a, int b, int max);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b > a)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    int mdcc = mdc(a, b, b);

    printf("%d\n", mdcc);


    return 0;
}


//------------------------------------------------------------------------------------------//


int mdc(int a, int b, int max)
{
    if (a % max == 0 && b % max == 0)
    {
        return max;
    }

    else
    {
        return mdc(a, b, max-1);
    }
}