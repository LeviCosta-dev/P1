#include <stdio.h>

int main(void)
{
    char nome[121];

    fgets(nome, 121, stdin);

    printf("Seja muito bem-vindo %s", nome);


    return 0;
}