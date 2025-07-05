#include <stdio.h>

int main()
{

    double matriz[12][12], soma, media;
    int coluna;
    char letra;

    scanf("%d %c", &coluna, &letra);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {

            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        soma += matriz[i][coluna];
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