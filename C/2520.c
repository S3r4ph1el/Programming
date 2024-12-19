#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, m, segundos;

    while (scanf("%d %d", &n, &m) != EOF)
    {

        int cidade[n][m], pokemon_x, pokemon_y, eu_x, eu_y;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &cidade[i][j]);

                if (cidade[i][j] == 2)
                {
                    pokemon_x = i;
                    pokemon_y = j;
                }
                else if (cidade[i][j] == 1)
                {
                    eu_x = i;
                    eu_y = j;
                }
            }
        }

        segundos = abs(pokemon_x - eu_x) + abs(pokemon_y - eu_y);

        printf("%d\n", segundos);
    }

    return 0;
}