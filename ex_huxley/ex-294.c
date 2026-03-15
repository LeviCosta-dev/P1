#include <stdio.h>

int main(void)
{
    int distancia;
    double litros, consumo;

    scanf("%d%lf", &distancia, &litros);

    consumo = distancia / litros;

    printf("%.3lf km/l", consumo);

    return 0;
}