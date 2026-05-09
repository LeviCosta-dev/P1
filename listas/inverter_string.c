#include <stdio.h>


//----------------------------------------------------------------------------------------//


int buscar(char palavra[], int i);
void inverter(char palavra[], int fim);
void ler(char palavra[], int i);


//----------------------------------------------------------------------------------------//


int main(void)
{
    char palavra[255];
    ler(palavra, 0);

    int fim = buscar(palavra, 0);

    inverter(palavra, fim - 1);


    return 0;
}


//----------------------------------------------------------------------------------------//


int buscar(char palavra[], int i)
{
    if (palavra[i] == '\0')
    {
        return i;
    }
    else
    {
        return buscar(palavra, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


void inverter(char palavra[], int fim)
{
    if (fim < 0)
    {
        printf("\n");
        return;
    }
    else
    {
        printf("%c", palavra[fim]);
        inverter(palavra, fim - 1);
    }
}


//----------------------------------------------------------------------------------------//


void ler(char palavra[], int i)
{
    if (i >= 254)
    {
        palavra[i] = '\0';
        return;
    }

    if (scanf("%c", &palavra[i]) == EOF)
    {
        palavra[i] = '\0';
        return;    
    }

    ler(palavra, i + 1);
    
}