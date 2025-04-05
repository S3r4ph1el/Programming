#include <stdio.h>

int main()
{

    int m, somaN = 0, somaC = 0, nota, carga;
    double IRA;

    while (scanf("%d", &m) != EOF)
    {

        for (int i = 0; i < m; i++)
        {

            scanf("%d %d", &nota, &carga);

            somaN += nota * carga;
            somaC += carga;
        }

        IRA = somaN / (somaC * 100.0);

        printf("%.4lf\n", IRA);
        somaN = somaC = 0;
    }

    return 0;
}