#include <stdio.h>

int main(void)
{
    // Declarando as variáveis que vou usar e atribuindo valores a elas
    int n, r, aux, p = 0, counti, countj;
    scanf("%d%d", n, r);

    // Criando e atribuindo valor ao array do genoma
    int genoma[n];

    for (int i = 0; i < n; i++)
    {
        genoma[i] = i + 1;
    }

    // Declarando o array do gene e das reversas e atribuindo os valores para eles
    int consulta[50000], reversasi[r], reversasj[r];

    for (int i = 0; i < r; i++)
    {
        scanf("%d %d", &reversasi[i],reversasj[i]);
    }

    // Vendo os genes que vão ser consultados ao final
    do
    {
        scanf("%d", &aux);
        if (aux != 0)
        {
            consulta[p] = aux;
            p++;
        }
    }
    while (aux != 0);


    return 0;
}
