#include <stdio.h>

int main(void)
{
    // Criando e atribuindo o valor da variável que vai dizer a quantidade de números 
    int tam;
    scanf("%d", &tam);

    // Criando e atribuindos os valores do array
    int num[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &num[i]);
    }

    // Ordenando os elementos
    for (int i = 0; i < tam; i++)
    {
        for (int count = 0; count < tam; count++)
        {
            int aux;

            if (num[count] > num[i])
            {
                aux = num[i];
                num[i] = num[count];
                num[count] = aux;
            }
        }
    }
    
    // Saída dos elementos do array em ordem crescente
    for (int i = 0; i < tam; i++)
    {
        printf("[%d]", num[i]);
    }
    printf("\n");


    return 0;
}