#include <stdio.h>

typedef struct
{

    char nome[21];
    int num;

} churras;

int main()
{

    int n;

    while (scanf("%d", &n) != EOF)
    {

        churras sequencia[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", sequencia[i].nome, &sequencia[i].num);
        }

        churras aux;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (sequencia[j].num > sequencia[j + 1].num)
                {

                    aux = sequencia[j];
                    sequencia[j] = sequencia[j + 1];
                    sequencia[j + 1] = aux;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%s", sequencia[i].nome);
            if (i + 1 < n)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}