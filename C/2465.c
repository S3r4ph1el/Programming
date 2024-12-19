#include <stdio.h>

void sent_horario(int matriz[100][100], int check[100][100], int k, int l, int size)
{
    int tmp1, tmp2, cont = 0;

    while (1)
    {
        if (l + 1 < size && matriz[k][l] <= matriz[k][l + 1] && check[k][l + 1] == 0)
        {
            check[k][l] = 1;
            tmp1 = k;
            tmp2 = l;
            l++;
            cont = 0;
        }
        else if (k + 1 < size && matriz[k][l] <= matriz[k + 1][l] && check[k + 1][l] == 0)
        {
            check[k][l] = 1;
            tmp1 = k;
            tmp2 = l;
            k++;
            cont = 0;
        }
        else if (l - 1 >= 0 && matriz[k][l] <= matriz[k][l - 1] && check[k][l - 1] == 0)
        {
            check[k][l] = 1;
            tmp1 = k;
            tmp2 = l;
            l--;
            cont = 0;
        }
        else if (k - 1 >= 0 && matriz[k][l] <= matriz[k - 1][l] && check[k - 1][l] == 0)
        {
            check[k][l] = 1;
            tmp1 = k;
            tmp2 = l;
            k--;
            cont = 0;
        }
        else
        {
            check[k][l] = 1;
            k = tmp1;
            l = tmp2;
            cont++;
        }

        if (cont == 2)
        {
            break;
        }
    }
}

int main()
{
    int x, k, l, alunos = 0;

    scanf("%d", &x);

    int matriz[100][100];
    int check[100][100] = {0};

    scanf("%d %d", &k, &l);

    k--;
    l--;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    sent_horario(matriz, check, k, l, x);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (check[i][j] == 1)
            {
                alunos++;
            }
        }
    }

    printf("%d\n", alunos);

    return 0;
}
