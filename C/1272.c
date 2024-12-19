#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char texto[52], cod[52];
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        int last = 0, jaFoi = 0;

        fgets(texto, 52, stdin);

        memset(cod, '\0', sizeof(cod));

        int onlySpaces = 1;

        for (int j = 0; texto[j] != '\0'; j++)
        {
            if (texto[j] != 32)
            {
                onlySpaces = 0;
                break;
            }
        }

        if (onlySpaces)
        {
            strcpy(cod, texto);
        }
        else
        {
            for (int j = 0; texto[j] != '\0'; j++)
            {
                if (texto[j] >= 97 && texto[j] <= 122 && jaFoi == 0)
                {
                    cod[last] = texto[j];
                    jaFoi = 1;
                    last++;
                }
                else if (texto[j] >= 97 && texto[j] <= 122 && jaFoi == 1)
                {
                    jaFoi = 1;
                }
                else
                {
                    jaFoi = 0;
                }
            }
        }
        printf("%s\n", cod);
    }

    return 0;
}
