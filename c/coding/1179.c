#include <stdio.h>

int main()
{

    int n, par[5], impar[5], j = 0, k = 0, contador = 0;

    for (int m = 0; m < 15; m++)
    {
        scanf("%d", &n);

        if ((n % 2) == 0)
        {

            par[j] = n;

            j++;

            if (j == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                j = 0;
            }
        }
        else
        {

            impar[k] = n;

            k++;

            if (k == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                k = 0;
            }
        }
        contador++;

        if (contador == 15)
        {

            for (int l = 0; l < k; l++)
            {
                printf("impar[%d] = %d\n", l, impar[l]);
            }

            for (int l = 0; l < j; l++)
            {
                printf("par[%d] = %d\n", l, par[l]);
            }
        }
    }

    return 0;
}