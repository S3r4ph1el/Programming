#include <stdio.h>

int main()
{

    double n1, n2, n3, a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (((a > b) && (a > c) && (b > c)) || ((a == b) && (a > c)) || ((b == c) && (a > b)))
    {
        n1 = a;
        n2 = b;
        n3 = c;
    }
    else if ((a > b) && (a > c) && (c > b) || ((a == c) && (a > b)))
    {
        n1 = a;
        n2 = c;
        n3 = b;
    }
    else if ((b > a) && (b > c) && (a > c) || ((b == a) && (b > c)) || ((a == c) && (b > a)))
    {
        n1 = b;
        n2 = a;
        n3 = c;
    }
    else if ((b > a) && (b > c) && (c > a) || ((b == c) && (b > a)))
    {
        n1 = b;
        n2 = c;
        n3 = a;
    }
    else if ((c > a) && (c > b) && (a > b) || ((c == a) && (c > b)) || ((b == a) && (c > a)))
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

    if (n1 >= (n2 + n3))
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else
    {

        if ((n1 * n1) == ((n2 * n2) + (n3 * n3)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((n1 * n1) > ((n2 * n2) + (n3 * n3)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((n1 * n1) < ((n2 * n2) + (n3 * n3)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((n1 == n2) && (n1 == n3) || ((n2 == n3) && (n2 == n1)))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (((n1 == n2) && (n1 != n3)) || ((n1 == n3) && (n1 != n2)) || ((n3 == n2) && (n3 != n1)) || ((n1 == n2) && (n2 != n3)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}