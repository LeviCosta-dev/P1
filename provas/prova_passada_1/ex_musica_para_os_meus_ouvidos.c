#include <stdio.h>

int main(void)
{
    int ep, es;
    double fator;
    
    scanf("%d %d %lf", &ep, &es, &fator);

    // Estilo prmário: eletronic
    if (ep == 1)
    {
        // Estilo secundário: hard
        if (es == 1)
        {
            printf("Aumenta Mais!\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
        // Estilo secundário: amistoso
        else
        {
            printf("Legal\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
    }
    // Estilo primário: indie
    else if (ep == 2)
    {
        // Estilo secundário: hard
        if (es == 1)
        {
            printf("Essa eh punk\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
        // Estilo secundário: amistoso
        else
        {
            printf("Hoje eu choro\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
    }
    // Estilo primário: rock
    else
    {
        // Estilo secundário: hard
        if (es == 1)
        {
            printf("Aumenta Mais!\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
        // Estilo secundário: amistoso
        else
        {
            printf("Legal\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(\n");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^\n");
            }
            else
            {
                printf("=D\n");
            }
        }
    }


    return 0;
}