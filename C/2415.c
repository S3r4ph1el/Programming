#include <stdio.h>

int main()
{

    int n, cont = 0, seq = 0;
    scanf("%d", &n);
    int numero[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numero[i]);
    }
    for (int j = 0; j < n; j++)
    {

        if (numero[j] == numero[j + 1])
        {
            cont++;
            if (cont > seq)
            {

                seq = cont;
            }
        }
        else
        {
            cont = 0;
        }
    }

    printf("%d\n", seq + 1);

    return 0;
}