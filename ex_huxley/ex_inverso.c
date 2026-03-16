#include <stdio.h>

int main(void)
{
    // Declarando as variáveis que vou usar e atribuindo o valor da variável qnt
    int qnt;
    scanf("%d", &qnt);
    int num[qnt];
    
    // Atribuindo os valores ao array
    for (int i = 0; i < qnt; i++)
    {
        scanf("%d", &num[i]);
    }

    // Imprimindo os valores de trás para frente
    for (int i = qnt - 1; i >=0; i--)
    {
        printf("%d ", num[i]);
    }
    printf("\n");


    return 0;
}