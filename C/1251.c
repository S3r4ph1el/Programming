#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{

    int asc2;
    int frequencia;

} data;

int compare(const void *a, const void *b)
{

    data *dataA = (data *)a;
    data *dataB = (data *)b;

    if (dataA->frequencia < dataB->frequencia)
    {
        return -1;
    }
    else if (dataA->frequencia > dataB->frequencia)
    {
        return 1;
    }
    else
    {
        if (dataA->asc2 < dataB->asc2)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{

    char string[1001];
    int brokeSpace = 0;

    while (scanf("%s", string) != EOF)
    {
        if (brokeSpace)
        {
            printf("\n");
        }

        data seq[95];

        int total = 0;

        for (int i = 0; string[i] != '\0'; i++)
        {
            int find = 0;

            for (int j = 0; j < total; j++)
            {
                if (string[i] == seq[j].asc2)
                {
                    find = 1;
                    seq[j].frequencia++;
                    break;
                }
            }

            if (!find)
            {
                seq[total].asc2 = string[i];
                seq[total].frequencia = 1;
                total++;
            }
        }

        qsort(seq, total, sizeof(data), compare);

        for (int i = 0; i < total; i++)
        {
            printf("%d %d\n", seq[i].asc2, seq[i].frequencia);
        }

        if (!brokeSpace)
        {
            brokeSpace = 1;
        }
    }

    return 0;
}