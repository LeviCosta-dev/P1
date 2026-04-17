#include <stdio.h>
#include <string.h>

int main(void)
{
    char p1[51], p2[51];
    
    fgets(p1, 51, stdin);
    fgets(p2, 51, stdin);

    if (strcmp(p1, p2) == 0)
    {
        printf("IGUAIS\n");
    }

    else
    {
        printf("DIFERENTES\n");
    }


    return 0;
}