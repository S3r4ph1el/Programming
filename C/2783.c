#include <stdio.h>

int main()
{

    int n, c, m, fig, repetida = 0, cont = 0;

    scanf("%d %d %d", &n, &c, &m);

    int carimbadas[c];

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &carimbadas[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &fig);
        for (int j = 0; j < c; j++)
        {
            if (fig == carimbadas[j])
            {
                cont++;
                carimbadas[j] += 300;
            }
        }
    }

    printf("%d\n", (c - cont));

    return 0;
}