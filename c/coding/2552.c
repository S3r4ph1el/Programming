#include <stdio.h>
#include <string.h>

int main()
{

    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {

        int matriz[n][m], resp[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                resp[i][j] = 0;
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matriz[i][j] == 0)
                {
                    if (matriz[i + 1][j] == 1 && i + 1 < n)
                    {
                        resp[i][j]++;
                    }
                    if (matriz[i][j + 1] == 1 && j + 1 < m)
                    {
                        resp[i][j]++;
                    }
                    if (matriz[i - 1][j] == 1 && i - 1 >= 0)
                    {
                        resp[i][j]++;
                    }
                    if (matriz[i][j - 1] == 1 && j - 1 >= 0)
                    {
                        resp[i][j]++;
                    }
                }
                else
                {
                    resp[i][j] = 9;
                }
                printf("%d", resp[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}