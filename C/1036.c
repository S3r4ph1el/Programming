#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, baska1, baska2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = sqrt(pow(b, 2) - (4.0 * a * c));
    baska1 = (-b + delta) / (2.0 * a);
    baska2 = (-b - delta) / (2.0 * a);

    if (a == 0 || (baska1 || baska2) < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if ((delta > 0) || (delta == 0))
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", baska1, baska2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}