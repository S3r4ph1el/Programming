#include <stdio.h>

int main()
{

    int n, vagas, num_maior = 0, k = 0, cont = 0;

    scanf("%d %d", &n, &vagas);

    int competidores[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &competidores[i]);

        if (competidores[i] > num_maior)
        {
            num_maior = competidores[i];
        }
    }

    while (1)
    {

        if (k == n)
        {
            if (cont >= vagas)
            {
                break;
            }
            else
            {
                k = num_maior = 0;
                for (int i = 0; i < n; i++)
                {
                    if (competidores[i] > num_maior)
                        num_maior = competidores[i];
                }
            }
        }

        if (num_maior == competidores[k])
        {
            cont++;
            competidores[k] = -1;
        }
        k++;
    }

    printf("%d\n", cont);

    return 0;
}