#include <stdio.h>
#include <stdint.h>

int main()
{

    int t, n;
    uint64_t fib[61] = {0, 1, 1};
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if ((n == 0) || (n == 1) || (n == 2))
        {
            printf("Fib(%d) = %lld\n", n, fib[n]);
        }
        else
        {
            for (int j = 3; j <= n; j++)
            {
                fib[j] = fib[j - 2] + fib[j - 1];
            }
            printf("Fib(%d) = %lld\n", n, fib[n]);
        }
    }

    return 0;
}