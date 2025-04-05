#include <stdio.h>

int main()
{

    int n, x, divisores = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &x);

        for (int j = 1; j < x; j++)
        {
            if ((x % j) == 0)
            {

                divisores += j;
            }
        }

        if (divisores == x)
        {
            printf("%d eh perfeito\n", x);
            divisores = 0;
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
            divisores = 0;
        }
    }

    return 0;
}