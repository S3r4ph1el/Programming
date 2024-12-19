#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char item[21];
} compras;

int compare(const void *a, const void *b)
{
    return strcmp(((compras *)a)->item, ((compras *)b)->item);
}

int main()
{

    int n;
    char list[21000];
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        int total = 0;

        fgets(list, 21000, stdin);
        list[strcspn(list, "\n")] = '\0';

        char *aux;
        char gap[1000][21];

        aux = strtok(list, " ");

        while (aux != NULL)
        {
            int find = 0;
            for (int j = 0; j < total; j++)
            {
                if (strcmp(aux, gap[j]) == 0)
                {
                    find = 1;
                    break;
                }
            }

            if (!find)
            {
                strcpy(gap[total], aux);
                total++;
            }

            aux = strtok(NULL, " ");
        }

        compras final[total];

        for (int j = 0; j < total; j++)
        {
            strcpy(final[j].item, gap[j]);
        }

        qsort(final, total, sizeof(compras), compare);

        for (int j = 0; j < total; j++)
        {
            printf("%s", final[j].item);
            if (j < total - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}