#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int m1[n][n], m2[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    
    int mr[n][n];
    int vazia = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mr[i][j] = m1[i][j] + m2[i][j];
            
            if (mr[i][j] != 0)
            {
                vazia = 0;
            }
        }
    }
    
    if (vazia)
    {
        printf("Vazia\n");
    }
    
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\n", mr[i][j]);
            }
        }
    }
    
	return 0;
}