#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int pessoas = 0;

    char andar[n][5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf(" %c", &andar[i][j]);
            if (andar[i][j] == 'F')
            {
                if (pessoas == 0)
                {
                    printf("Impossivel!\n");
                    return 0;
                }
                else
                {
                    printf("Resgatados: %d\n", pessoas);
                    return 0;
                }
            }
            else if (andar[i][j] == 'P')
            {
                pessoas++;
            }
        }
    }

    if (pessoas == 0)
    {
        printf("Predio vazio\n");
    }
    else
    {
        printf("Resgatados: %d\n", pessoas);
    }


    return 0;
}