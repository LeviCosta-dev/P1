#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    int diagonal = 0;
    int maior;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            if (i == 0 && j == 0)
            {
                maior = matriz[0][0];
            }
            else
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                }
            }
            
            if (i == j)
            {
                diagonal += matriz[i][j];
            }
        }
    }
    
    double media = soma / 9.0;
    int delta;
    
    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior == 0)
    {
        delta = 0;
    }
    else
    {
        delta = -1;
    }
    
    printf("%.2lf %d %d %d\n", media, maior, delta, diagonal);
    
	return 0;
}