#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    char placas[101];

    for (int i = 1; i <= n; i++)
    {

        scanf("%s", placas);

        int len = strlen(placas);
        int fail = 0;

        if ((len != 8) || (placas[3] != '-'))
        {
            fail = 1;
        }
        else
        {
            int j = 0;

            while (1)
            {

                if (j == 8)
                {
                    break;
                }

                if ((placas[j] < 65 || placas[j] > 90) && j <= 2)
                {
                    fail = 1;
                    break;
                }
                else if (j >= 4 && (placas[j] < 48 || placas[j] > 57))
                {
                    fail = 1;
                    break;
                }
                j++;
            }
        }

        if (fail == 0)
        {

            int c = placas[7];

            if (c == '1' || c == '2')
            {
                printf("MONDAY\n");
            }
            else if (c == '3' || c == '4')
            {
                printf("TUESDAY\n");
            }
            else if (c == '5' || c == '6')
            {
                printf("WEDNESDAY\n");
            }
            else if (c == '7' || c == '8')
            {
                printf("THURSDAY\n");
            }
            else if (c == '9' || c == '0')
            {
                printf("FRIDAY\n");
            }
        }
        else
        {
            printf("FAILURE\n");
        }
    }

    return 0;
}