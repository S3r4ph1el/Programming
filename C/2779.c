#include <stdio.h>

int main()
{

    int n, m, fig, contador_m = 0, novo = 0, last = 0;

    scanf("%d %d", &n, &m);
    int album[n];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &fig);
        for (int j = 0; j < n; j++)
        {
            if (fig == album[j])
            {
                novo = 1;
                break;
            }
        }
        if (novo == 0)
        {
            album[last] = fig;
            last++;
            contador_m++;
        }
        novo = 0;
    }

    printf("%d\n", (n - contador_m));

    return 0;
}