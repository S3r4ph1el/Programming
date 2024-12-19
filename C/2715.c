#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    while (scanf("%d", &n) != EOF)
    {

        int x[n], i, j = n - 1;
        long long int total, rangel, gugu, result;
        i = rangel = gugu = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }

        while (i <= j)
        {

            if ((rangel + x[i]) <= (gugu + x[j]))
            {

                rangel += x[i];
                i++;
            }
            else
            {
                gugu += x[j];
                j--;
            }
        }

        result = llabs(rangel - gugu);

        printf("%lld\n", result);
    }

    return 0;
}