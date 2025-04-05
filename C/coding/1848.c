#include <stdio.h>
#include <string.h>

int main()
{

    int sonho = 0;
    char eyes[8];

    while (sonho < 3)
    {
        int soma = 0;

        while (1)
        {
            fgets(eyes, 8, stdin);

            if (strcmp(eyes, "caw caw") == 0)
            {
                break;
            }

            for (int i = 0; i < 3; i++)
            {
                if (eyes[i] == '*')
                {
                    soma += 1 << (2 - i);
                }
            }
        }

        printf("%d\n", soma);
        sonho++;
    }

    return 0;
}