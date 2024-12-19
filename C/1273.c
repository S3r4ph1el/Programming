#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n != 0)
    {
        char nome[n][51];
        int maior = 0;

        for (int i = 0; i < n; i++)
        {
            fgets(nome[i], 52, stdin);

            nome[i][strcspn(nome[i], "\n")] = '\0';

            if (strlen(nome[i]) > maior)
            {
                maior = strlen(nome[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int aux = strlen(nome[i]);
            for (int j = 0; j < maior - aux; j++)
            {
                printf(" ");
            }
            printf("%s\n", nome[i]);
        }
        scanf("%d", &n);
        getchar();
        if (n == 0)
        {
            break;
        }
        printf("\n");
    }

    return 0;
}