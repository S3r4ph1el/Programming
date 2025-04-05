#include <stdio.h>

int main()
{

    int a, b, c, d;
    int m, h;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (c > a)
    {
        if (d < b)
        {
            h = (c - 1) - a;
            m = (d + 60) - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
        else
        {
            h = c - a;
            m = d - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
    }
    else if (c == 0)
    {
        if (d < b)
        {
            h = 23 - a;
            m = (60 + d) - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
        else
        {
            h = 24 - a;
            m = d - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
    }
    else if (c == a)
    {
        if (d > b)
        {
            m = d - b;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m);
        }
        else
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    }
    else
    {
        if (d < b)
        {
            h = (23 + c) - a;
            m = (60 + d) - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
        else
        {
            h = (24 - c) - a;
            m = d - b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
    }

    return 0;
}