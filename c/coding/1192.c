#include <stdio.h>

int main()
{

    int n;
    char seq[4];
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%s", seq);

        int num_1 = seq[0] - '0';
        int num_2 = seq[2] - '0';

        if (num_1 == num_2)
        {
            printf("%d\n", num_1 * num_2);
        }
        else if (seq[1] >= 65 && seq[1] <= 90)
        {
            printf("%d\n", num_2 - num_1);
        }
        else
        {
            printf("%d\n", num_1 + num_2);
        }
    }

    return 0;
}