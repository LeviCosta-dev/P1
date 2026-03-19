#include <stdio.h>

int main(void)
{
    int c, t, a, l ,e;
    double chance = 100, variacao = 0;

    scanf("%d %d %d %d %d", &c, &t, &a, &l, &e);

    // Chance para jogos em casa
    if (c == 1)
    {
        // Jogo com sol
        if (t == 1)
        {
            if (a > 40000)
            {
                variacao += a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            else
            {
                variacao -= a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            variacao += 33.21;
        }

        // Jogo com neve
        else if (t == 2)
        {
            if (a > 40000)
            {
                variacao += a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            else
            {
                variacao -= a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            variacao += 10.51;
        }

        // Jogo com chuva
        else
        {
            if (a > 40000)
            {
                variacao += a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            else
            {
                variacao -= a * 0.0008;
                variacao -= l * 2.7;
                if (e > 0)
                {
                    variacao += e * 2.7;
                }
                else
                {
                    variacao += e * 1.8;
                }
            }
            variacao -= 20.7;
        }
    }
    
    // Jogos fora de casa
    else
    {
        // Jogo com sol
        if (t == 1)
        {
            variacao -= 10.87;
            if (a > 45000)
            {
                variacao -= a * 0.0003;
            }
            else 
            {
                variacao -= a * 0.0001;
            }
            if (e > 0)
            {
                variacao += e * 5.2;
            }
            else
            {
                variacao += e * 1.5;
            }
            variacao -= l * 2.7;
        }

        // Jogo com neve
        else if (t == 2)
        {
             printf("A chance de vitoria do flamengo e de 0.00\n");
            return 0;
        }

        // Jogo com chuva
        else
        {
            printf("A chance de vitoria do flamengo e de 0.00\n");
            return 0;
        }
    }

    chance += variacao;
    if (chance < 0)
    {
        chance = 0;
    }
    if (chance > 100)
    {
        chance = 100;
    }
    printf("A chance de vitoria do flamengo e de %.2lf\n", chance);


    return 0;
}