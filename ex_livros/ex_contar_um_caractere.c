#include <stdio.h>

int main(void)
{
    int count = 0;
    char letra, palavra[51];

    fgets(palavra, 51, stdin);
    scanf("%c", &letra);

    for (int i = 0; i < 51; i++)
    {
        if (palavra[i] == letra)
        {
            count++;
        }
    }

    printf("%d\n", count);


    return 0;
}