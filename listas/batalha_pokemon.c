// Incluindo bibliotecas
#include <math.h>
#include <stdio.h>


//-----------------------------------------------------------------------------------------//

// Funções que vou usar
void batalha(int n, int count);
void vencedor(int v1, int d1, int v2, int d2, int turno);


//-----------------------------------------------------------------------------------------//


int main(void)
{
    int n;
    scanf("%d", &n);

    batalha(n, 0);


    return 0;
}


//-----------------------------------------------------------------------------------------//


// Função que chama a função que calcula o vencedor
void batalha(int n, int count)
{
    if (n == count)
    {
        return;
    }
    else
    {
        int v1, d1, v2, d2;
        scanf("%d %d %d %d", &v1, &v2, &d1, &d2);

        vencedor(v1, d1, v2, d2, 0);

        return batalha(n, count + 1);
    }
}


//-----------------------------------------------------------------------------------------//


// Função que calcula o vencedor
// 0 -> turno do Clodes | 1 -> Pokemon do Clodes
// 1 -> turno do Bezaliel | 2 -> Pokemon do Bezaliel
void vencedor(int v1, int d1, int v2, int d2, int turno)
{
    if (v1 <= 0)
    {
        printf("Bezaliel\n");

        return;
    }
    
    else if (v2 <= 0)
    {
        printf("Clodes\n");

        return;
    }

    
    else 
    {
        // Turno Clodes (aumentar o dano/atacar)
        if (turno == 0)
        {
            if (ceil((double)v1/d2) < ceil((double)v2/d1))
            {
                d1 += 50;
            }
            else
            {
                v2 -= d1;
            }
            turno = 1;
        }

        // Turno Bezaliel (atacar sempre)
        else if (turno == 1)
        {
            v1 -= d2;
            turno = 0;
        }

        return vencedor(v1, d1, v2, d2, turno);
    }
}