#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    char nome[100];
    char cor[10];
    int tam;

} dados;

int compare(dados *p1, dados *p2)
{
    if (strcmp(p1->cor, p2->cor) != 0)
    {
        return strcmp(p1->cor, p2->cor);
    }
    else if (p1->tam != p2->tam)
    {
        return p1->tam - p2->tam;
    }
    else
    {
        return strcmp(p1->nome, p2->nome);
    }
}

int main()
{

    int n;

    while (n != 0)
    {

        scanf("%d\n", &n);

        dados camisetas[n];

        char aux;

        for (int i = 0; i < n; i++)
        {

            gets(camisetas[i].nome);
            scanf("%s %c\n", camisetas[i].cor, &aux);

            if (aux == 'P')
            {
                camisetas[i].tam = 1;
            }
            else if (aux == 'M')
            {
                camisetas[i].tam = 2;
            }
            else
            {
                camisetas[i].tam = 3;
            }
        }

        qsort(camisetas, n, sizeof(dados), compare);

        for (int i = 0; i < n; i++)
        {
            if (camisetas[i].tam == 1)
            {
                aux = 'P';
            }
            else if (camisetas[i].tam == 2)
            {
                aux = 'M';
            }
            else
            {
                aux = 'G';
            }

            printf("%s %c %s\n", camisetas[i].cor, aux, camisetas[i].nome);
        }

        scanf("%d\n", &n);
        if (n != 0)
        {
            printf("\n");
        }
    }

    return 0;
}