#include <stdio.h>


//----------------------------------------------------------------------------------------//


int tam = 11;
int alunos = 0;
int aprovados = 0;
double freq[11] = {0};


//----------------------------------------------------------------------------------------//


void atualizar_freq(double freq[], int nota);
void calcular_nota(char gabarito[], char resposta[], int i, int n, double nota);
void chama(char gabarito[]);
void ler_aluno(char respostas[], int i);
void ler_gabarito(char gabarito[], int i);
double maior(double array[], int i, int m);


//----------------------------------------------------------------------------------------//


int main(void)
{
    char gabarito[11];
    ler_gabarito(gabarito, 0);
    
    chama(gabarito);


    return 0;
}


//----------------------------------------------------------------------------------------//


void atualizar_freq(double freq[], int nota)
{
    freq[nota]++;
}


//----------------------------------------------------------------------------------------//


void calcular_nota(char gabarito[], char resposta[], int i, int n, double nota)
{
    if (gabarito[i] == '\0')
    {
        if (nota >= 6)
        {
            aprovados++;
        }
        atualizar_freq(freq, nota);
        printf("%d %.1lf\n", n, nota);
        return;
    }


    if (gabarito[i] == resposta[i])
    {
        nota++;
    }

    calcular_nota(gabarito, resposta, i + 1, n, nota);
}


//----------------------------------------------------------------------------------------//


void chama(char gabarito[])
{
    int n;
    scanf("%d", &n);

    if (n == 9999)
    {
        printf("%.1lf%%\n", (aprovados * 100.0) / alunos);
        printf("%.1lf\n", maior(freq, 0, 0));
        return;
    }

    else
    {
        alunos++;

        char resposta[11];
        ler_aluno(resposta, 0);

        calcular_nota(gabarito, resposta, 0, n, 0);

        chama(gabarito);
    }
}


//----------------------------------------------------------------------------------------//


void ler_aluno(char respostas[], int i)
{
    if (i == 10)
    {
        respostas[i] = '\0';
        return;
    }

    scanf(" %c", &respostas[i]);

    ler_aluno(respostas, i + 1);
}


//----------------------------------------------------------------------------------------//


void ler_gabarito(char gabarito[], int i)
{
    if (i == tam - 1)
    {
        gabarito[i] = '\0';
        return;
    }
    else
    {
        scanf(" %c", &gabarito[i]);
        ler_gabarito(gabarito, i + 1);
    }
}


//----------------------------------------------------------------------------------------//


double maior(double array[], int i, int m)
{
    if (i > 10)
    {
        return m;
    }

    else
    {
        if (array[m] < array[i])
        {
            m = i;
        }

        return maior(array, i + 1, m);
    }
}