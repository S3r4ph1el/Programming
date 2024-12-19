#include <stdio.h>

int main()
{

    int a, b, soma = 0;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        if (b % 2 == 0)
        {
            b++;
            for (b; b < a; b += 2)
            {
                soma += b;
            }
        }
        else
        {
            b += 2;
            for (b; b < a; b += 2)
            {
                soma += b;
            }
        }
    }
    else if (b > a)
    {
        if (a % 2 == 0)
        {
            a++;
            for (a; a < b; a += 2)
            {
                soma += a;
            }
        }
        else
        {
            a += 2;
            for (a; a < b; a += 2)
            {
                soma += a;
            }
        }
    }
    else if (a == b)
    {
        printf("0\n");
    }

    printf("%d\n", soma);

    return 0;
}