#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

    int num, aux;

    while (scanf("%d", &num) != EOF)
    {

        int num_digito = 0;

        if (primo(num) == 1)
        {

            int cont = 0;
            while (num != 0)
            {
                aux = num % 10;
                num /= 10;
                num_digito++;
                if (primo(aux) == 1)
                {
                    cont++;
                }
            }

            if (num_digito == cont)
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
        else
        {
            printf("Nada\n");
        }
    }

    return 0;
}