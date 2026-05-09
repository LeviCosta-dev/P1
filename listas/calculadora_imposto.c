#include <stdio.h>

int main(void)
{
    double cotacao_dolar, aliquota, valor_produto_dolar, valor_frete_dolar;
    scanf("%lf %lf %lf %lf", &cotacao_dolar, &aliquota, &valor_produto_dolar, &valor_frete_dolar);

    double valor_produto_real, valor_frete_real;

    valor_produto_real = valor_produto_dolar * cotacao_dolar;
    valor_frete_real = valor_frete_dolar * cotacao_dolar;

    double imposto_importacao;
    double valor_final;

    aliquota = aliquota / 100;

    int isento = 0;

    if (valor_produto_dolar >= 2500)
    {
        imposto_importacao  = valor_produto_real * 0.6;
        valor_final = (valor_produto_real + imposto_importacao) / (1 - aliquota);
        isento = 1;
    }
    else
    {
        imposto_importacao  = (valor_produto_real + valor_frete_real) * 0.6;
        valor_final = (valor_produto_real + imposto_importacao + valor_frete_real) / (1 - aliquota);
    }

    double icms = valor_final * aliquota;
    double valor_total = valor_frete_real + valor_produto_real;
    double imposto_total = icms + imposto_importacao;

    if (isento)
    {
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados sem o frete\n", cotacao_dolar, valor_produto_real, valor_frete_real, valor_total, imposto_importacao, icms, imposto_total, valor_total + imposto_total);
    }
    else
    {
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados com o frete\n", cotacao_dolar, valor_produto_real, valor_frete_real, valor_total, imposto_importacao, icms, imposto_total, valor_total + imposto_total);
    }


    return 0;
}


/*
Sua saída deve conter:

-Taxa de conversão monetária (Cotação do dolar)
-Valor do produto (em reais)
-Valor do frete (em reais)
-Valor total (Valor do frete + Valor do produto)
-Valor de impostos de importação
-Valor de icms
-Total de Impostos (Importação + ICMS)
-Total a pagar
-Dizer se o total foi ou não isento do frete no calculo

*/