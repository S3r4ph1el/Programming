#include <stdio.h>

int main()
{

    int t, razao, contador = 0, tmp;
    scanf("%d", &t);
    int numero[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &numero[i]);
    }

    if ((t == 1) || (t == 2))
    {
        printf("1\n");
    }
    else
    {
        for (int j = 1; j < t; j++)
        {
            razao = numero[j] - numero[j - 1];
            if (razao != tmp)
            {
                contador++;
                tmp = razao;
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}