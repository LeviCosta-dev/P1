#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    double soma = 0;
    int frutat = 0;

    for (int i = 1; i <= n; i++)
    {
        double valor;
        scanf("%lf", &valor);
        soma += valor;

        getchar();
        
       char linha[99999];
       fgets(linha, sizeof(linha), stdin);

       int fruta = 1;
       for (int j = 0; linha[j] != '\0'; j++)
       {
        if (linha[j] == ' ')
        {
            fruta++;
        }
       }

       frutat += fruta;

       printf("dia %d: %d kg\n", i, fruta);
    }

    printf("%.2lf kg por dia\n", (double) frutat / n);
    printf("R$ %.2lf por dia\n", soma / n);



    return 0;
}