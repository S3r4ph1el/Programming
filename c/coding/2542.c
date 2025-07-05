#include <stdio.h>

void input(int linha, int coluna, int matriz[linha][coluna])
{

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main()
{

    int n;
    while (scanf("%d", &n) != EOF)
    {

        int m, l, c_m, c_l, a;
        scanf("%d %d", &m, &l);

        int cartas_M[m][n], cartas_L[l][n];

        input(m, n, cartas_M);
        input(l, n, cartas_L);

        scanf("%d %d %d", &c_m, &c_l, &a);

        int result_1 = cartas_M[c_m - 1][a - 1];
        int result_2 = cartas_L[c_l - 1][a - 1];

        if (result_1 > result_2)
        {
            printf("Marcos\n");
        }
        else if (result_1 == result_2)
        {
            printf("Empate\n");
        }
        else
        {
            printf("Leonardo\n");
        }
    }

    return 0;
}