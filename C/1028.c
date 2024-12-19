#include <stdio.h>

int original_b, original_a;

int max_divisor(int a, int b)
{

    if (original_a % b == 0 && original_b % b == 0)
    {
        return b;
    }
    else
    {
        return max_divisor(b, a % b);
    }
}

int main()
{

    int n, f1, f2;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d %d", &f1, &f2);

        if (f1 > f2)
        {
            original_a = f1;
            original_b = f2;

            printf("%d\n", max_divisor(f1, f2));
        }
        else
        {
            original_a = f2;
            original_b = f1;

            printf("%d\n", max_divisor(f2, f1));
        }
    }

    return 0;
}