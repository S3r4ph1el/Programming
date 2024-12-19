#include <stdio.h>

double function(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 / (2 + function(n - 1));
    }
}

int main()
{

    double result;
    int n;

    scanf("%d", &n);

    result = function(n);

    printf("%.10lf\n", result + 1);

    return 0;
}