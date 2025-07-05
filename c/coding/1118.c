#include <stdio.h>

int main()
{

    double x, media = 0.0;
    int y = 1, i = 0;

    do
    {
        scanf("%lf", &x);

        if ((x >= 0.0) && (x <= 10.0))
        {
            media += x;
            i++;
            if (i == 2)
            {
                printf("media = %.2lf\n", media / 2);
                i = 0, media = 0.0;
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &y);
                while ((y != 1) && (y != 2))
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &y);
                }
            }
        }
        else
        {
            printf("nota invalida\n");
        }

    } while (y != 2);

    return 0;
}