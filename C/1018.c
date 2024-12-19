#include <stdio.h>

int main()
{

    int a, a100, a50, a20, a10, a5, a2, a1;
    scanf("%d", &a);

    a100 = a / 100;
    a50 = a % 100 / 50;
    a20 = (a % 100) % 50 / 20;
    a10 = ((a % 100) % 50) % 20 / 10;
    a5 = (((a % 100) % 50) % 20) % 10 / 5;
    a2 = ((((a % 100) % 50) % 20) % 10) % 5 / 2;
    a1 = (((((a % 100) % 50) % 20) % 10) % 5) % 2;

    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", a100);
    printf("%d nota(s) de R$ 50,00\n", a50);
    printf("%d nota(s) de R$ 20,00\n", a20);
    printf("%d nota(s) de R$ 10,00\n", a10);
    printf("%d nota(s) de R$ 5,00\n", a5);
    printf("%d nota(s) de R$ 2,00\n", a2);
    printf("%d nota(s) de R$ 1,00\n", a1);

    return 0;
}