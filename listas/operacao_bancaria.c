#include <stdio.h>

typedef struct
{
    int operacao;
    double valor;
} conjunto;

int main(void)
{
    conjunto op[100];
    double saldo = 0;
    double credito = 0;
    double debito = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d %lf", &op[i].operacao, &op[i].valor);

        if (op[i].operacao == -1)
        {
            break;
        }

        // Débito
        if (op[i].operacao == 0)
        {
            debito += op[i].valor;
            saldo -= op[i].valor;
        }

        // Crédito
        if (op[i].operacao == 1)
        {
            credito += op[i].valor;
            saldo += op[i].valor;
        }
    }

    printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf\n", credito, debito, saldo);



    return 0;
}