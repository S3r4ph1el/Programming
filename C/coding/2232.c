#include <stdio.h>
#include <math.h>

int function(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(2, n) + function(n - 1);
    }
}

int main()
{

    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d", &n);

        n--;

        int result = function(n);

        printf("%d\n", result);
    }

    return 0;
}