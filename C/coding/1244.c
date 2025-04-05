#include <stdio.h>
#include <string.h>

typedef struct
{

    char string[52];

} Data;

int main()
{

    int n;
    Data seq[52];
    char aux[2710];
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(aux, 2710, stdin);
        aux[strcspn(aux, "\n")] = '\0';

        int tam = 0;
        int pos = 0;
        for (int j = 0; aux[j] != '\0'; j++)
        {
            if (aux[j] != ' ')
            {
                seq[tam].string[pos++] = aux[j];
            }
            else
            {
                seq[tam].string[pos] = '\0';
                tam++;
                pos = 0;
            }
        }
        seq[tam].string[pos] = '\0';
        tam++;

        Data aux_2;

        for (int j = 0; j < tam - 1; j++)
        {
            for (int k = 0; k < tam - j - 1; k++)
            {

                if (strlen(seq[k].string) < strlen(seq[k + 1].string))
                {
                    aux_2 = seq[k];
                    seq[k] = seq[k + 1];
                    seq[k + 1] = aux_2;
                }
            }
        }

        for (int j = 0; j < tam; j++)
        {
            if (j == tam - 1)
                printf("%s\n", seq[j].string);
            else
            {
                printf("%s ", seq[j].string);
            }
        }
    }

    return 0;
}