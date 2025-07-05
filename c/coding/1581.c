#include <stdio.h>
#include <string.h>

int main()
{

    int n, k;
    char idioma[22], aux[22];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &k);
        int equal = 0;

        for (int j = 1; j <= k; j++)
        {

            scanf("%s", idioma);
            if (j == 1)
            {
                strcpy(aux, idioma);
            }
            else
            {
                if (strcmp(aux, idioma) == 0)
                {
                    equal++;
                }
            }
        }

        if (equal == k - 1)
        {
            printf("%s\n", aux);
        }
        else
        {
            printf("ingles\n");
        }
    }

    return 0;
}
