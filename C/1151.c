#include <stdio.h>

int main()
{

    int n, fib[42] = {0, 1, 1};
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        fib[i + 3] = fib[i + 2] + fib[i + 1];
        printf("%d ", fib[i]);
    }

    printf("%d\n", fib[n - 1]);

    return 0;
}