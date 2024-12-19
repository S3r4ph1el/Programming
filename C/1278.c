#include <stdio.h>
#include <string.h>

typedef struct
{
    char leite[55];
} Frase;

int main()
{

    int n, len;
    char string[55], aux[55];
    scanf("%d", &n);

    while (n != 0)
    {
        getchar();

        Frase frases[n];

        for (int i = 0; i < n; i++)
        {

            fgets(string, 55, stdin);
            string[strcspn(string, "\n")] = '\0';
            memset(aux, '\0', sizeof(aux));

            int indice = 0;

            for (int j = 0; string[j] != '\0'; j++)
            {

                if (string[j] != ' ')
                {

                    aux[indice] = string[j];
                    indice++;

                    if (string[j + 1] == ' ')
                    {

                        aux[indice] = ' ';
                        indice++;
                    }
                }
            }

            indice--;

            if (aux[indice] == ' ')
            {
                aux[indice] = '\0';
                indice--;
            }

            strcpy(frases[i].leite, aux);
        }

        int maior = 0;

        for (int i = 0; i < n; i++)
        {
            len = strlen(frases[i].leite);
            if (len > maior)
            {
                maior = len;
            }
        }

        for (int i = 0; i < n; i++)
        {
            int len = strlen(frases[i].leite);

            if (len == maior)
            {
                printf("%s\n", frases[i].leite);
            }
            else
            {
                int size = maior - len;
                for (int j = 0; j < size; j++)
                {
                    printf(" ");
                }
                printf("%s\n", frases[i].leite);
            }
        }

        scanf("%d", &n);
        if (n != 0)
        {
            printf("\n");
        }
    }

    return 0;
}