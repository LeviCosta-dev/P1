#include <stdio.h>


//----------------------------------------------------------------------------------------//


double arrecadar(int n, double total);
int casas(int n, int total);
void ler(double multas, int casa);


//----------------------------------------------------------------------------------------//


int main(void)
{
    ler(0, 0);
}


//----------------------------------------------------------------------------------------//


double arrecadar(int n, double total)
{
    if (n > 2)
    {
        total += (n - 2) * 12.89;
        return total;
    }
    
    else
    {
        return 0;
    }
}


//----------------------------------------------------------------------------------------//


int casas(int n, int total)
{
    if (n > 2)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}


//----------------------------------------------------------------------------------------//


void ler(double multas, int casa)
{
    int n;
    scanf("%d", &n);

    if (n != 999)
    {
        multas += arrecadar(n, 0);
        casa += casas(n, 0);
    
        ler(multas, casa);
    
    }

    else
    {
        printf("%.2lf\n%d\n", multas, casa);
        
        return;
    }
}