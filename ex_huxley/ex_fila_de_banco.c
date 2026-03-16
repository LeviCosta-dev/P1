#include <stdio.h>

int main(void)
{
    // Declarando as variáveis do tamanho da fila e de qual funcionário foi almoçar
    int no, mo, n, m, k, nm;
    scanf("%d %d %d", &no, &mo, &k);

    n = no;
    m = mo;
    nm = n + m;

    // Declarando os arrays das filas
    int f1[n], f2[m], fr[nm];

    // Atribuindo os valores das filas
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &f2[i]);
    }

    n = 0;
    m = 0;

    // Criando a fila resultante
    if (k == 1)
    {
        int i = 0, ii = 1;
        do
        {
            fr[i] = f2[m];
            fr[ii] = f1[n];
            i += 2;
            ii += 2;
            m++;
            n++;
        }
        while (n < no && m < mo);
        if (n < no)
        {
            do
            {
                fr[i] = f1[n];
                i++;
                n++;
            }
            while (n < no);
            
        }
        else
        {
            do
            {
                fr[i] = f2[m];
                i++;
                m++;
            }
            while (m < mo);
        }
    }
    else
    {
        int i = 0, ii = 1;
        do
        {
            fr[i] = f1[n];
            fr[ii] = f2[m];
            i += 2;
            ii += 2;
            m++;
            n++;
        }
        while (n < no && m < mo);
        if (n < no)
        {
            do
            {
                fr[i] = f1[n];
                i++;
                n++;
            }
            while (n < no);
            
        }
        else
        {
            do
            {
                fr[i] = f2[m];
                i++;
                m++;
            }
            while (m < mo);
        }
    }
    
    for (int i = 0; i < nm; i++)
    {
        printf("%d\n", fr[i]);
    }


    return 0;
}