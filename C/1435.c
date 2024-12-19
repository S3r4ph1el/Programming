#include <stdio.h>

int main()
{

    while (1)
    {

        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        int aux = (n + 1) / 2, a = 0, b = n - 1;

        int matriz[n][n];

        for (int l = 1; l <= aux; l++)
        {
            for (int i = a; i <= b; i++)
            {
                for (int j = a; j <= b; j++)
                {
                    matriz[i][j] = l;
                }
            }
            a++;
            b--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%3d", matriz[i][j]);
                }
                else
                {
                    printf(" %3d", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}