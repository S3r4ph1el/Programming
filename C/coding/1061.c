#include <stdio.h>

int main()
{

    char dia1[4], dia2[4];
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int d, h, m, s;

    scanf("%s %d", dia1, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", dia2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    if (h2 > h1)
    {
        if (m2 > m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1;
                h = h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1;
                h = h2 - h1;
                m = m2 - m1;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
        else if (m2 < m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1;
                h = h2 - h1;
                m = 59 + m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1;
                h = h2 - h1;
                m = 59 + m2 - m1;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
        else
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1;
                h = h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1;
                h = h2 - h1 - 1;
                m = 59;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
    }

    else if (h2 < h1)
    {
        if (m2 > m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1 - 1;
                h = 24 + h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = 24 + h2 - h1;
                m = m2 - m1;
                s = 60 + s2 - s1;
            }

            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }

        else if (m2 < m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1 - 1;
                h = 23 + h2 - h1;
                m = 60 + m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = 23 + h2 - h1;
                m = 59 + m2 - m1;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
        else
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1 - 1;
                h = 23 + h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = h2 - h1 + 23;
                m = 59;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
    }

    else
    {
        if (m2 > m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1 - 1;
                h = 24 + h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = 24 + h2 - h1;
                m = m2 - m1;
                s = 60 + s2 - s1;
            }

            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }

        else if (m2 < m1)
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1 - 1;
                h = 23 + h2 - h1;
                m = 60 + m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = 23 + h2 - h1;
                m = 59 + m2 - m1;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
        else
        {
            if ((s2 > s1) || (s2 == s1))
            {
                d = d2 - d1;
                h = h2 - h1;
                m = m2 - m1;
                s = s2 - s1;
            }
            else
            {
                d = d2 - d1 - 1;
                h = 23;
                m = 59;
                s = 60 + s2 - s1;
            }
            printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
        }
    }

    return 0;
}