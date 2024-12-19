#include <stdio.h>

int main()
{

    double matriz[12][12], soma, media;
    int linha;
    char letra;

    scanf("%d %c", &linha, &letra);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {

            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        soma += matriz[linha][i];
    }

    if (letra == 'S')
    {

        printf("%.1lf\n", soma);
    }
    else
    {

        media = soma / 12;
        printf("%.1lf\n", media);
    }

    return 0;
}