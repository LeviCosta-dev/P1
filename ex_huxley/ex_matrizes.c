#include <stdio.h>

int main(void)
{
    for (int infinito = 0; infinito != 1; infinito)
    {
        // Criando as variáveis que vou utilizar e escaneando o valor da matriz
        int n = 0, m = 0, valor = 1, t = 0, a = 0, b = 0, c = 0, d = 0, x = 0, y = 0;
        double resultado = 0;
        scanf("%d %d", &n, &m);
        int in = n - 1, im = m - 1;

        // Verificando se o usuário encerrou o código ou declarou n ou m como 0
        if (n == 0 && m == 0)
        {
            return 0;
        }

        if (n == 0 || m == 0)
        {
            printf("0.00\n");
        }
    
        else
        {
            // Criando minha matriz e atribuindo os valores para ela e calculando t
            int matriz[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int count = 0; count < m; count++)
                {
                    matriz[i][count] = valor;
                    t += valor;
                    valor++;
                }
            }

            // Calculando a e b
            for (int i = 0; i < n; i++)
            {
                a += matriz[i][0];
                b += matriz[i][m - 1];
            }

            // Calculando c e d
            for (int i = 0; i < m; i++)
            {
                c += matriz[0][i];
                d += matriz[n - 1][i];
            }

            // Calculando x
            for (int i = 0; i < n && i < m; i++)
            {
                x += matriz[i][i];
            }

            // Calculando y
            while (in >= 0 && im >= 0)
            {
                y += matriz[in][im];
                in--;
                im--;
            }

            // Calculando a resposta
            resultado = (double)(t - (x + y) + (a * b) - (c * d)) / (n * m);

            // Saída
            printf("%.2lf\n", resultado);
        }
    }


    return 0;
}