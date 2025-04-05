#include <stdio.h>
#include <string.h>

int main()
{

    int n, q;

    while (scanf("%d", &n) != EOF)
    {

        char data[n][101];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", data[i]);
        }

        scanf("%d", &q);

        char search[101];

        for (int i = 0; i < q; i++)
        {

            scanf("%s", search);
            int size = strlen(search);
            int maior = 0, sugestao = 0;

            for (int j = 0; j < n; j++)
            {
                int len = strlen(data[j]);

                if (strncmp(data[j], search, size) == 0)
                {
                    sugestao++;
                    if (len > maior)
                    {
                        maior = len;
                    }
                }
            }

            if (sugestao != 0)
            {
                printf("%d %d\n", sugestao, maior);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}