#include <stdio.h>

int main()
{

    int a100 = 0, a50 = 0, a20 = 0, a10 = 0, a5 = 0, a2 = 0;
    int b1 = 0, b50 = 0, b25 = 0, b10 = 0, b05 = 0, b01 = 0;
    double dinheiro;
    scanf("%lf", &dinheiro);

    while (dinheiro >= 100.0)
    {
        a100++;
        dinheiro -= 100.0;
    }
    while (dinheiro >= 50)
    {
        a50++;
        dinheiro -= 50.0;
    }
    while (dinheiro >= 20)
    {
        a20++;
        dinheiro -= 20.0;
    }
    while (dinheiro >= 10)
    {
        a10++;
        dinheiro -= 10.0;
    }
    while (dinheiro >= 5)
    {
        a5++;
        dinheiro -= 5.0;
    }
    while (dinheiro >= 2)
    {
        a2++;
        dinheiro -= 2.0;
    }

    while (dinheiro >= 1.0)
    {
        b1++;
        dinheiro -= 1.0;
    }
    while (dinheiro >= 0.50)
    {
        b50++;
        dinheiro -= 0.50;
    }
    while (dinheiro >= 0.25)
    {
        b25++;
        dinheiro -= 0.25;
    }
    while (dinheiro >= 0.10)
    {
        b10++;
        dinheiro -= 0.10;
    }
    while (dinheiro >= 0.05)
    {
        b05++;
        dinheiro -= 0.05;
    }
    while (dinheiro >= 0.01)
    {
        b01++;
        dinheiro -= 0.01;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a100);
    printf("%d nota(s) de R$ 50.00\n", a50);
    printf("%d nota(s) de R$ 20.00\n", a20);
    printf("%d nota(s) de R$ 10.00\n", a10);
    printf("%d nota(s) de R$ 5.00\n", a5);
    printf("%d nota(s) de R$ 2.00\n", a2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", b1);
    printf("%d moeda(s) de R$ 0.50\n", b50);
    printf("%d moeda(s) de R$ 0.25\n", b25);
    printf("%d moeda(s) de R$ 0.10\n", b10);
    printf("%d moeda(s) de R$ 0.05\n", b05);
    printf("%d moeda(s) de R$ 0.01\n", b01);

    return 0;
}