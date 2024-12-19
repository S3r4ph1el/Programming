#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ordem;

    while (1)
    {

        scanf("%d", &ordem);

        if (ordem == 0)
        {
            break;
        }

        int matriz[ordem][ordem], k;

        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++)
            {

                k = 0;

                while (k != 100)
                {

                    if (abs(i - j) == k)
                    {
                        matriz[i][j] = k + 1;
                        break;
                    }
                    k++;
                }
            }
        }

        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++)
            {
                if (matriz[i][j] >= 100)
                {
                    if (j == ordem - 1)
                    {
                        printf("%d\n", matriz[i][j]);
                    }
                    else
                    {
                        printf("%d ", matriz[i][j]);
                    }
                }
                else if (matriz[i][j] >= 10)
                {
                    if (j == ordem - 1)
                    {
                        printf(" %d\n", matriz[i][j]);
                    }
                    else
                    {
                        printf(" %d ", matriz[i][j]);
                    }
                }
                else
                {
                    if (j == ordem - 1)
                    {
                        printf("  %d\n", matriz[i][j]);
                    }
                    else
                    {
                        printf("  %d ", matriz[i][j]);
                    }
                }
            }
        }

        printf("\n");
    }

    return 0;
}