#include <stdio.h>

int main()
{
    int n;

    while (1)
    {

        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        char codigo[1001];
        int num_0 = 0, num_1 = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%s", codigo);

            num_0 = num_1 = 0;

            for (int j = 0; codigo[j] != '\0'; j++)
            {
                int num = codigo[j] - '0';
                if (j % 2 == 0)
                {
                    num_1 += num;
                }
                else
                {
                    num_0 += num;
                }
            }

            int only_1 = 0, only_0 = 0;

            while (num_1 > 0)
            {
                only_1 += num_1 % 10;
                num_1 /= 10;
            }
            while (num_0 > 0)
            {
                only_0 += num_0 % 10;
                num_0 /= 10;
            }

            num_1 = only_1;
            num_0 = only_0;

            printf("%d\n", num_1 + num_0);
        }
    }
    return 0;
}
