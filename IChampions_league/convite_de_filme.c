#include <stdio.h>

int main(void)
{
    int genero, dia, horario, amigos;
    scanf("%d %d %d %d", &genero, &dia, &horario, &amigos);

    double chance = 0;

    // Ação
    if (genero == 1)
    {
        chance += 27.4;
    }

    // Romance
    else if (genero == 2)
    {
        chance -= 10.5;
    }

    // Terror
    else
    {
        chance += 19.7;
    }

    
    // Dia de semana
    if (dia == 1)
    {
        chance -= 41.3;
    }

    // Fim de semana
    else
    {
        chance += 40.4;
    }


    // Manhã
    if (horario == 1)
    {
        chance -= 22.8;
    }

    // Tarde
    else if (horario == 2)
    {
        chance += 11.4;
    }

    // Noite
    else
    {
        chance += 38.6;
    }


    chance += amigos * 2.3;

    
    if (chance <= 40)
    {
        printf("Melhor nao tentar.");
    }
    else if (chance <= 80)
    {
        printf("Chances boas, pode convidar.");
    }
    else
    {
        printf("Provavelmente vao aceitar.");
    }


    return 0;
}