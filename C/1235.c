#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char string[102];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {

        fgets(string, 102, stdin);
        string[strcspn(string, "\n")] = '\0';

        int num = strlen(string);
        int metade = num / 2;

        for (int j = metade - 1; j >= 0; j--)
        {
            printf("%c", string[j]);
        }

        for (int j = num - 1; j >= metade; j--)
        {
            printf("%c", string[j]);
        }

        printf("\n");
    }

    return 0;
}
