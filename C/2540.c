#include <stdio.h>

int main()
{

    int n, votos, fav = 0;
    double formula;

    while (scanf("%d", &n) != EOF)
    {

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &votos);
            if (votos == 1)
            {
                fav++;
            }
        }
        formula = 2.0 * n / 3;
        if (fav >= formula)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
        fav = 0;
        formula = 0;
    }

    return 0;
}