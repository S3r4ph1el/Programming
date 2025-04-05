#include <stdio.h>

int main()
{

    int i = 1, j = 1, n, jogada1, jogada2;
    char nome1[11], nome2[11];

    scanf("%d\n", &n);

    while (n != 0)
    {

        scanf("%s\n", nome1);
        scanf("%s\n", nome2);
        printf("Teste %d\n", j);

        while (i <= n)
        {
            scanf("%d %d", &jogada1, &jogada2);
            if (((jogada1 + jogada2) % 2) == 0)
            {
                printf("%s\n", nome1);
            }
            else
            {
                printf("%s\n", nome2);
            }
            i++;
        }

        i = 1;
        printf("\n");
        scanf("%d", &n);

        j++;
    }

    return 0;
}