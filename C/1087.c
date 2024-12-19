#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    for (int i = 1; i <= 8; i++)
    {

        if (((x1 - i) == x2) && ((y1 + i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if (((x1 - i) == x2) && ((y1 - i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if (((x1 + i) == x2) && ((y1 - i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if (((x1 + i) == x2) && ((y1 + i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if (((x1 - i) == x2) && (y1 == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if (((x1 + i) == x2) && (y1 == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if ((x1 == x2) && ((y1 - i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if ((x1 == x2) && ((y1 + i) == y2))
        {
            i = 10;
            printf("1\n");
        }
        else if ((x1 == x2) && (y1 == y2) && (x1 != 0) && (y2 != 0))
        {
            i = 10;
            printf("0\n");
        }
        else if ((abs(x1 - x2) != abs(y1 - y2)) && ((x2 != x1) && (y2 != y1)))
        {
            i = 10;
            printf("2\n");
        }
    }

    while ((x1 != 0) && (x2 != 0) && (y1 != 0) && (y2 != 0))
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int i = 1; i <= 8; i++)
        {

            if (((x1 - i) == x2) && ((y1 + i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if (((x1 - i) == x2) && ((y1 - i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if (((x1 + i) == x2) && ((y1 - i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if (((x1 + i) == x2) && ((y1 + i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if (((x1 - i) == x2) && (y1 == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if (((x1 + i) == x2) && (y1 == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if ((x1 == x2) && ((y1 - i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if ((x1 == x2) && ((y1 + i) == y2))
            {
                i = 10;
                printf("1\n");
            }
            else if ((x1 == x2) && (y1 == y2) && (x1 != 0) && (y2 != 0))
            {
                i = 10;
                printf("0\n");
            }
            else if ((abs(x1 - x2) != abs(y1 - y2)) && ((x2 != x1) && (y2 != y1)))
            {
                i = 10;
                printf("2\n");
            }
        }
    }

    return 0;
}