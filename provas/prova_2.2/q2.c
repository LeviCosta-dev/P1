#include <stdio.h>

int main(void)
{
    char tipo;
    int tamanho;
    scanf(" %c", &tipo);
    scanf("%d", &tamanho);

    if (tipo == 'T')
    {
        if (tamanho == 1)
        {
            int arr[9][16];
            int tami = 9;
            int tamj = 16;

            for (int i = 0; i < tami; i++)
            {
                for (int j = 0; j < tamj; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }

            while (1)
            {
                char c;
                scanf("%c", &c);

                if (c == 'F')
                {
                    break;
                }

                else if (c == 'O')
                {
                    for (int i = 1; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'E')
                {
                    for (int i = 0; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'S')
                {
                    for (int i = 0; i < tamj; i++)
                    {
                        arr[0][i] = 1;
                    }

                    for (int i = 0; i < tamj; i++)
                    {
                        arr[tami - 1][i] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][0] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][tamj - 1] = 1;
                    }
                }

                else if (c == 'H')
                {
                    if (arr[0][0] == 0)
                    {
                        for (int i = 0; i < ((tami/2)); i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                    
                    else
                    {
                        for (int i = tami / 2; i < tami; i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                }

                else if (c == 'R')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if ((i + j) % 2 == 0)
                            {
                                arr[i][j] =  1;
                            }
                        }
                    }
                }

                else if (c == 'Q')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if (arr[i][j] == 0)
                            {
                                arr[i][j] = 1;
                            }

                            else
                            {
                                arr[i][j] = 0;
                            }
                        }
                    }
                }

                
            }
            int pixels = 0;

                for (int i = 0; i < tami; i++)
                {
                    for (int j = 0; j < tamj; j++)
                    {
                        if (j == tamj - 1)
                        {
                            printf("%d\n", arr[i][j]);
                        }
                        else
                        {    
                            printf("%d ", arr[i][j]);
                        }
                        if (arr[i][j] == 1)
                        {
                            pixels++;
                        }
                    }
                }

                int pixels_total = tami * tamj;

                double pixels_funcionais = (double) pixels / pixels_total * 100;

                printf("Porcentagem de pixels funcionais: %.2lf%%\n", pixels_funcionais);

                if (pixels_funcionais <= 40)
                {
                    printf("Status: Reparação Ineficaz\n");
                }
                else if (pixels_funcionais <= 70)
                {
                    printf("Status: Reparado Parcialmente\n");
                }
                else if (pixels_funcionais < 100)
                {
                    printf("Status: Reparado em sua Maioria\n");
                }
                else if (pixels_funcionais == 100)
                {
                    printf("Status: Reparado Totalmente\n");
                }
        }

        else
        {
            int arr[18][32];
            int tami = 18;
            int tamj = 32;

            for (int i = 0; i < tami; i++)
            {
                for (int j = 0; j < tamj; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }

            while (1)
            {
                char c;
                scanf("%c", &c);

                if (c == 'F')
                {
                    break;
                }

                else if (c == 'O')
                {
                    for (int i = 1; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'E')
                {
                    for (int i = 0; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'S')
                {
                    for (int i = 0; i < tamj; i++)
                    {
                        arr[0][i] = 1;
                    }

                    for (int i = 0; i < tamj; i++)
                    {
                        arr[tami - 1][i] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][0] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][tamj - 1] = 1;
                    }
                }

                else if (c == 'H')
                {
                    if (arr[0][0] == 0)
                    {
                        for (int i = 0; i < ((tami/2)); i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                    
                    else
                    {
                        for (int i = tami / 2; i < tami; i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                }

                else if (c == 'R')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if ((i + j) % 2 == 0)
                            {
                                arr[i][j] =  1;
                            }
                        }
                    }
                }

                else if (c == 'Q')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if (arr[i][j] == 0)
                            {
                                arr[i][j] = 1;
                            }

                            else
                            {
                                arr[i][j] = 0;
                            }
                        }
                    }
                }

                
        }
        int pixels = 0;

                for (int i = 0; i < tami; i++)
                {
                    for (int j = 0; j < tamj; j++)
                    {
                        if (j == tamj - 1)
                        {
                            printf("%d\n", arr[i][j]);
                        }
                        else
                        {    
                            printf("%d ", arr[i][j]);
                        }
                        if (arr[i][j] == 1)
                        {
                            pixels++;
                        }
                    }
                }

                int pixels_total = tami * tamj;

                double pixels_funcionais = (double) pixels / pixels_total * 100;

                printf("Porcentagem de pixels funcionais: %.2lf%%\n", pixels_funcionais);

                if (pixels_funcionais <= 40)
                {
                    printf("Status: Reparação Ineficaz\n");
                }
                else if (pixels_funcionais <= 70)
                {
                    printf("Status: Reparado Parcialmente\n");
                }
                else if (pixels_funcionais < 100)
                {
                    printf("Status: Reparado em sua Maioria\n");
                }
                else if (pixels_funcionais == 100)
                {
                    printf("Status: Reparado Totalmente\n");
                }
            }
    }

    else
    {
        if (tamanho == 1)
        {
            int arr[6][10];
            int tami = 6;
            int tamj = 10;

            for (int i = 0; i < tami; i++)
            {
                for (int j = 0; j < tamj; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }

            while (1)
            {
                char c;
                scanf("%c", &c);

                if (c == 'F')
                {
                    break;
                }

                else if (c == 'O')
                {
                    for (int i = 1; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'E')
                {
                    for (int i = 0; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'S')
                {
                    for (int i = 0; i < tamj; i++)
                    {
                        arr[0][i] = 1;
                    }

                    for (int i = 0; i < tamj; i++)
                    {
                        arr[tami - 1][i] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][0] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][tamj - 1] = 1;
                    }
                }

                else if (c == 'H')
                {
                    if (arr[0][0] == 0)
                    {
                        for (int i = 0; i < ((tami/2)); i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                    
                    else
                    {
                        for (int i = tami / 2; i < tami; i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                }

                else if (c == 'R')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if ((i + j) % 2 == 0)
                            {
                                arr[i][j] =  1;
                            }
                        }
                    }
                }

                else if (c == 'Q')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if (arr[i][j] == 0)
                            {
                                arr[i][j] = 1;
                            }

                            else
                            {
                                arr[i][j] = 0;
                            }
                        }
                    }
                }

                
            }
            int pixels = 0;

                for (int i = 0; i < tami; i++)
                {
                    for (int j = 0; j < tamj; j++)
                    {
                        if (j == tamj - 1)
                        {
                            printf("%d\n", arr[i][j]);
                        }
                        else
                        {    
                            printf("%d ", arr[i][j]);
                        }
                        if (arr[i][j] == 1)
                        {
                            pixels++;
                        }
                    }
                }

                int pixels_total = tami * tamj;

                double pixels_funcionais = (double) pixels / pixels_total * 100;

                printf("Porcentagem de pixels funcionais: %.2lf%%\n", pixels_funcionais);

                if (pixels_funcionais <= 40)
                {
                    printf("Status: Reparação Ineficaz\n");
                }
                else if (pixels_funcionais <= 70)
                {
                    printf("Status: Reparado Parcialmente\n");
                }
                else if (pixels_funcionais < 100)
                {
                    printf("Status: Reparado em sua Maioria\n");
                }
                else if (pixels_funcionais == 100)
                {
                    printf("Status: Reparado Totalmente\n");
                }
        }

        else
        {
            int arr[12][20];
            int tami = 12;
            int tamj = 20;

            for (int i = 0; i < tami; i++)
            {
                for (int j = 0; j < tamj; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }

            while (1)
            {
                char c;
                scanf("%c", &c);

                if (c == 'F')
                {
                    break;
                }

                else if (c == 'O')
                {
                    for (int i = 1; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'E')
                {
                    for (int i = 0; i < tami; i += 2)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            arr[i][j] = 1;
                        }
                    }
                }

                else if (c == 'S')
                {
                    for (int i = 0; i < tamj; i++)
                    {
                        arr[0][i] = 1;
                    }

                    for (int i = 0; i < tamj; i++)
                    {
                        arr[tami - 1][i] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][0] = 1;
                    }

                    for (int i = 0; i < tami; i++)
                    {
                        arr[i][tamj - 1] = 1;
                    }
                }

                else if (c == 'H')
                {
                    if (arr[0][0] == 0)
                    {
                        for (int i = 0; i < ((tami/2)); i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                    
                    else
                    {
                        for (int i = tami / 2; i < tami; i++)
                        {
                            for (int j = 0; j < tamj; j++)
                            {
                                arr[i][j] = 1;
                            }
                        }
                    }
                }

                else if (c == 'R')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if ((i + j) % 2 == 0)
                            {
                                arr[i][j] =  1;
                            }
                        }
                    }
                }

                else if (c == 'Q')
                {
                    for (int i = 0; i < tami; i++)
                    {
                        for (int j = 0; j < tamj; j++)
                        {
                            if (arr[i][j] == 0)
                            {
                                arr[i][j] = 1;
                            }

                            else
                            {
                                arr[i][j] = 0;
                            }
                        }
                    }
                }

                
            }

            int pixels = 0;

                for (int i = 0; i < tami; i++)
                {
                    for (int j = 0; j < tamj; j++)
                    {
                        if (j == tamj - 1)
                        {
                            printf("%d\n", arr[i][j]);
                        }
                        else
                        {    
                            printf("%d ", arr[i][j]);
                        }
                        if (arr[i][j] == 1)
                        {
                            pixels++;
                        }
                    }
                }

                int pixels_total = tami * tamj;

                double pixels_funcionais = (double) pixels / pixels_total * 100;

                printf("Porcentagem de pixels funcionais: %.2lf%%\n", pixels_funcionais);

                if (pixels_funcionais <= 40)
                {
                    printf("Status: Reparação Ineficaz\n");
                }
                else if (pixels_funcionais <= 70)
                {
                    printf("Status: Reparado Parcialmente\n");
                }
                else if (pixels_funcionais < 100)
                {
                    printf("Status: Reparado em sua Maioria\n");
                }
                else if (pixels_funcionais == 100)
                {
                    printf("Status: Reparado Totalmente\n");
                }
        }
    }


    return 0;
}