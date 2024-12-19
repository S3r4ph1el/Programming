#include <stdio.h>
#include <math.h>

int primo(int number)
{
    if (number < 2 || (number != 2 && number % 2 == 0))
    {
        return 0;
    }
    else
    {
        int sqrt_n = sqrt(number);
        for (int i = 3; i <= sqrt_n; i += 2)
        {
            if (number % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{

    int m, salto;

    while (scanf("%d", &m) != EOF)
    {

        int moedas[m], soma = 0;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &moedas[i]);
        }
        scanf("%d", &salto);

        for (int i = (m - 1); i >= 0; i -= salto)
        {
            soma += moedas[i];
        }

        if (primo(soma) == 1)
        {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
        else
        {
            printf("Bad boy! I’ll hit you.\n");
        }
    }

    return 0;
}