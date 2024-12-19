#include <stdio.h>

int main()
{

    int n, m, bilhete;

    while (1)
    {

        scanf("%d %d", &n, &m);

        if ((n == 0) && (m == 0))
        {
            break;
        }

        int pacote[n], copiados = 0;

        for (int i = 1; i <= n; i++)
        {
            pacote[i] = 0;
        }

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &bilhete);
            pacote[bilhete]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (pacote[i] > 1)
            {
                copiados++;
            }
        }

        printf("%d\n", copiados);
    }

    return 0;
}