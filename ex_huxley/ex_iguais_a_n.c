#include <stdio.h>

int main(void)
{
    // Declarando as variáveis que vou usar
    int TAM = 100;
    int num[TAM], n_ref;

    // Atribuindo os valores
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &n_ref);

    // Imprimindo as posições dos valores iguais
    for (int i = 0; i < TAM; i++)
    {
        if (num[i] == n_ref)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}