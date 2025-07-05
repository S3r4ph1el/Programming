#include <stdio.h>

int main()
{

    int x, y, end;
    int inter = 0, gremio = 0, z = 0, contador = 0;

    do
    {
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            inter++;
        }
        else if (y > x)
        {
            gremio++;
        }
        else
        {
            z++;
        }
        contador++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &end);

    } while (end != 2);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", contador, inter, gremio, z);
    if (gremio > inter)
    {
        printf("Gremio venceu mais\n");
    }
    else if (inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}