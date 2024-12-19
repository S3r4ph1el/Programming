#include <stdio.h>

int main()
{

    int n, carneiros = 0, k = 0, check = 0;
    long long int total_estrelas = 0, steal;
    scanf("%d", &n);

    int estrelas[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &estrelas[i]);
        total_estrelas += estrelas[i];
    }

    while (1)
    {

        if (estrelas[k] % 2 != 0)
        {

            estrelas[k]--;
            k++;
            carneiros++;
            if (k > (n - 1))
            {
                break;
            }
            if (check < k)
            {
                check = k;
            }
        }
        else if (estrelas[k] % 2 == 0)
        {

            if (estrelas[k] == 0)
            {

                k--;
            }
            else
            {

                estrelas[k]--;
                k--;
                carneiros++;
            }
        }

        if ((k < 0) || (k > (n - 1)))
        {
            break;
        }
    }

    steal = total_estrelas - carneiros;

    printf("%d %lld\n", check + 1, steal);

    return 0;
}