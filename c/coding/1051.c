#include <stdio.h>

int main()
{

    float salario, imposto, imposto8, imposto18;
    scanf("%f", &salario);
    imposto8 = 1000 * 0.08;
    imposto18 = 1500 * 0.18;

    if (salario <= 2000.00)
    {
        printf("Isento\n");
    }
    else if ((salario >= 2000.01) && (salario <= 3000.00))
    {
        imposto = (salario - 2000.00) * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if ((salario >= 3000.01) && (salario <= 4500.00))
    {
        imposto = (salario - 3000.00) * 0.18;
        printf("R$ %.2f\n", imposto + imposto8);
    }
    else if (salario > 4500.00)
    {
        imposto = (salario - 4500.00) * 0.28;
        printf("R$ %.2f\n", imposto + imposto8 + imposto18);
    }

    return 0;
}