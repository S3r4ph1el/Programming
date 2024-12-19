#include <stdio.h>
#include <math.h>

int main()
{

    long long int t, Pa, Pb, anos = 1;
    double Ta, Tb;

    scanf("%lld", &t);

    for (int i = 1; i <= t; i++)
    {

        scanf("%lld %lld %lf %lf", &Pa, &Pb, &Ta, &Tb);

        Ta = floor(Ta * 10.0001) / 1000;
        Tb = floor(Tb * 10.0001) / 1000;

        while (1)
        {

            if (anos > 100)
            {
                break;
            }

            Pa = (Pa * Ta) + Pa;
            Pb = (Pb * Tb) + Pb;

            if (Pa > Pb)
            {
                break;
            }

            anos++;
        }

        if (anos > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%lld anos.\n", anos);
        }

        anos = 1;
    }

    return 0;
}