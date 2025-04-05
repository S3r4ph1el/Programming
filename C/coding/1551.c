#include <stdio.h>
#include <string.h>

int alfa(char *frase)
{
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
    int cont = 0;

    for (int j = 0; frase[j] != '\0'; j++)
    {
        for (int k = 0; k < 26; k++)
        {
            if (frase[j] == alfabeto[k])
            {
                cont++;
                alfabeto[k] = '-';
            }
        }
        if (cont == 26)
        {
            return 1;
        }
    }
    if (cont >= 13)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{

    char frase[1002];
    int n;

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {

        fgets(frase, 1002, stdin);
        frase[strcspn(frase, "\n")] = '\0';

        int resp = alfa(frase);

        if (resp == 1)
        {
            printf("frase completa\n");
        }
        else if (resp == 2)
        {
            printf("frase quase completa\n");
        }
        else if (resp == 3)
        {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}