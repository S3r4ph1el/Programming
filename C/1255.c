#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{

    char letra;
    int frequencia;

} sequencia;

int main()
{

    int n;
    char string[201];
    scanf("%d", &n);
    getchar();

    sequencia letras[26];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            letras[j].letra = '\0';
            letras[j].frequencia = 0;
        }

        fgets(string, 201, stdin);
        string[strcspn(string, "\n")] = '\0';

        int len = strlen(string);
        int maior = 0, total = 0;

        for (int j = 0; j < len; j++)
        {

            int find = 0;
            char current_letter = tolower(string[j]);

            if (isalpha(current_letter))
            {

                for (int k = 0; k < total; k++)
                {
                    if (letras[k].letra == current_letter)
                    {
                        letras[k].frequencia++;
                        find = 1;
                        break;
                    }
                }

                if (!find && total < 26)
                {
                    letras[total].letra = current_letter;
                    letras[total].frequencia = 1;
                    total++;
                }
            }
        }

        for (int j = 0; j < total; j++)
        {
            if (letras[j].frequencia > maior)
            {
                maior = letras[j].frequencia;
            }
        }

        sequencia aux;

        for (int j = 0; j < total - 1; j++)
        {
            for (int k = 0; k < total - j - 1; k++)
            {

                if (letras[k].letra > letras[k + 1].letra)
                {
                    aux = letras[k];
                    letras[k] = letras[k + 1];
                    letras[k + 1] = aux;
                }
            }
        }

        for (int j = 0; j < total; j++)
        {
            if (maior == letras[j].frequencia)
            {
                printf("%c", letras[j].letra);
            }
        }

        printf("\n");
    }

    return 0;
}