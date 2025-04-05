#include <stdio.h>

int main()
{

    double matriz[12][12], soma, media;
    int cont = 0;
    char letra;

    scanf("%c", &letra);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {

            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (i < j)
            {
                soma += matriz[i][j];
                cont++;
            }
        }
    }

    if (letra == 'S')
    {

        printf("%.1lf\n", soma);
    }
    else
    {

        media = soma / cont;
        printf("%.1lf\n", media);
    }

    return 0;
}