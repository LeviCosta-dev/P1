#include <stdio.h>

int main(void)
{
    // Declarando as variáveis
    int TAM = 37, doc, voos[TAM], disponibilidade[TAM], i, voo, aux = -1;

    // Escaneando os voos e os lugares disponíveis 
    for (i = 0; i < TAM; i++)
    {
        scanf("%d %d", &voos[i], &disponibilidade[i]);
    }

    // Checando se o voo que o usuário quer reservar tem disponibilidade
    do
    {
    // Escaneando o documento
        scanf("%d", &doc);
        
        aux = -1;
        
    // Checando se o usuário digitou o código de quebra
        if (doc == 9999)
        {
            break;
        }

    // Escanenado qual voo o usuário quer reservar o lugar
        scanf("%d", &voo);

    // Procurando a posição do voo desejado
        for (i = 0; i < TAM; i++)
        {
            if (voo == voos[i])
            {
                aux = i;
                break;
            }
        }

    // Vendo se ainda restam lugares disponíveis
        if (disponibilidade[aux] > 0)
        {
            printf("%d\n", doc);
            disponibilidade[aux]--;
        }
        else
        {
            printf("INDISPONIVEL\n");
        }
    } 
    while (doc != 9999);
    

    return 0;
}