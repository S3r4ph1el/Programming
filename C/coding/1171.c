#include <stdio.h>

int main()
{

    int n, var, menor = 2001, cont = 0;

    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &numbers[i]);
    }

    int l, k, total = 0;

    for (int j = 0; j < n; j++)
    {

        for (l = 0; l < n; l++)
        {

            if (numbers[l] < menor)
            {
                menor = numbers[l];
            }
        }

        var = menor;

        for (k = 0; k < n; k++)
        {

            if (var == numbers[k])
            {
                cont++;
                numbers[k] += 5000;
            }
        }

        printf("%d aparece %d vez(es)\n", var, cont);

        total += cont;

        if (total == n)
        {
            return 0;
        }

        cont = 0, k = 0, l = 0, menor = 2001;
    }

    return 0;
}