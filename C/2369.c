#include <stdio.h>

int main()
{

    int n, resp = 0;
    scanf("%d", &n);

    if ((n >= 0) && (n <= 10))
    {
        resp = 7;
    }
    else if ((n >= 11) && (n <= 30))
    {
        resp = 7 + (1 * (n - 10));
    }
    else if ((n >= 31) && (n <= 100))
    {
        resp = 7 + 20 + (2 * (n - 30));
    }
    else if (n >= 101)
    {
        resp = 7 + 20 + 140 + (5 * (n - 100));
    }

    printf("%d\n", resp);

    return 0;
}