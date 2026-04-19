#include <stdio.h>

void analise(int dia, int programas, int linhas, int ml, int mp, int maior, int diam);

int main(void)
{
    analise(0, 0, 0 , 0, 0, 0, 0);
}


void analise(int dia, int programas, int linhas, int ml, int mp, int maior, int diam)
{
    if (dia == 7)
    {
        if (diam == 0)// DOMINGO
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: DOMINGO\n", mp, ml);
        }

        if (diam == 1)// SEGUNDA
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEGUNDA\n", mp, ml);
        }
        
        if (diam == 2)// TERCA
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: TERCA\n", mp, ml);
        }
        
        if (diam == 3)// QUARTA
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUARTA\n", mp, ml);
        }
        
        if (diam == 4)// QUINTA
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUINTA\n", mp, ml);
        }
        
        if (diam == 5)// SEXTA
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEXTA\n", mp, ml);
        }
        
        if (diam == 6)// SABADO
        {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SABADO\n", mp, ml);
        }
        
        
        return;
    }

    else
    {
        scanf("%d %d", &programas, &linhas);

        if (programas >= 5)
        {
            mp++;
        }

        if (linhas >= 100)
        {
            ml++;
        }

        if (linhas >= maior)
        {
            maior = linhas;
            diam = dia;
        }

        dia++;
        
        return analise(dia, 0, 0, ml, mp, maior, diam);
    }
}