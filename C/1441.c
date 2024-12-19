#include <stdio.h>

int maior = 0;

int granizo(int num)
{

    if (num > maior)
    {
        maior = num;
    }

    if (num == 1)
    {
        return 1;
    }
    else if (num % 2 == 0)
    {
        return granizo(num / 2);
    }
    else
    {
        return granizo(num * 3 + 1);
    }
}

int main()
{

    int h;

    while (1)
    {

        scanf("%d", &h);

        if (h == 0)
        {
            break;
        }

        maior = 0;
        granizo(h);

        printf("%d\n", maior);
    }

    return 0;
}