#include <stdio.h>

int main(void)
{
    int altura, idade, brinquedos = 0;

    scanf("%d %d", &altura, &idade);

    // Barco Viking
    if (altura >= 150 && idade >= 12)
    {
        brinquedos++;
    }

    // Elevator of Death
    if (altura >= 140 && idade >= 14)
    {
        brinquedos++;
    }

    // Final Killer
    if (altura >= 170 || idade >= 16)
    {
        brinquedos++;
    }

    printf("%d", brinquedos);


    return 0;
}