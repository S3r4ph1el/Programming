#include <stdio.h>

int main()
{

    int n1, n2, n3, a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c) && (b > c))
    {
        n1 = a;
        n2 = b;
        n3 = c;
    }
    else if ((a > b) && (a > c) && (c > b))
    {
        n1 = a;
        n2 = c;
        n3 = b;
    }
    else if ((b > a) && (b > c) && (a > c))
    {
        n1 = b;
        n2 = a;
        n3 = c;
    }
    else if ((b > a) && (b > c) && (c > a))
    {
        n1 = b;
        n2 = c;
        n3 = a;
    }
    else if ((c > a) && (c > b) && (a > b))
    {
        n1 = c;
        n2 = a;
        n3 = b;
    }
    else
    {
        n1 = c;
        n2 = b;
        n3 = a;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", n3, n2, n1, a, b, c);

    return 0;
}