#include <stdio.h>

int main()
{

    int n, num, total;
    int c = 0, r = 0, s = 0;
    float c1, r1, s1;
    char tipo;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%d %c", &num, &tipo);

        if (tipo == 'C')
        {
            c += num;
        }
        else if (tipo == 'R')
        {
            r += num;
        }
        else
        {
            s += num;
        }
    }

    total = c + r + s;
    c1 = c * 1.0 / total * 1.0;
    r1 = r * 1.0 / total * 1.0;
    s1 = s * 1.0 / total * 1.0;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", c1 * 100);
    printf("Percentual de ratos: %.2f %%\n", r1 * 100);
    printf("Percentual de sapos: %.2f %%\n", s1 * 100);

    return 0;
}