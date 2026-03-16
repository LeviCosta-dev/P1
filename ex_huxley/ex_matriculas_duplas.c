#include <stdio.h>

int main(void)
{
    // Declarando as variáveis que vou usar
    int tamp2 = 45, tamp3 = 30;
    int p2[tamp2], p3[tamp3], i;

    // Atribuindo os valores
    for (i = 0; i < tamp2; i++)
    {
        scanf("%d", &p2[i]);
    }

    for (i = 0; i < tamp3; i++)
    {
        scanf("%d", &p3[i]);
    }

    // Checando se um aluno está nas duas matérias e imprimindo os alunos que estiverem
    for (i = 0; i < tamp2; i++)
    {
        for (int count = 0; count < tamp3; count++)
        {
            if (p2[i] == p3[count])
            {
                printf("%d ", p2[i]);
            }
        }
    }
    printf("\n");


    return 0;
}