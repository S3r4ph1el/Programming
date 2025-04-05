#include <stdio.h>

int main()
{
    int etapas, e1, e2, s1, s2;

    while (scanf("%d", &etapas) != EOF)
    {
        scanf("%d %d", &e1, &e2);

        int line1[etapas], line2[etapas], trans1[etapas - 1], trans2[etapas - 1];

        for (int i = 0; i < etapas; i++)
        {
            scanf("%d", &line1[i]);
        }

        for (int i = 0; i < etapas; i++)
        {
            scanf("%d", &line2[i]);
        }

        for (int i = 0; i < etapas - 1; i++)
        {
            scanf("%d", &trans1[i]);
        }

        for (int i = 0; i < etapas - 1; i++)
        {
            scanf("%d", &trans2[i]);
        }

        scanf("%d %d", &s1, &s2);

        int dif1[etapas], dif2[etapas];

        dif1[0] = e1 + line1[0];
        dif2[0] = e2 + line2[0];

        for (int i = 1; i < etapas; i++)
        {
            if (dif1[i - 1] < dif2[i - 1] + trans2[i - 1])
            {
                dif1[i] = line1[i] + dif1[i - 1];
            }
            else
            {
                dif1[i] = line1[i] + dif2[i - 1] + trans2[i - 1];
            }

            if (dif2[i - 1] < dif1[i - 1] + trans1[i - 1])
            {
                dif2[i] = line2[i] + dif2[i - 1];
            }
            else
            {
                dif2[i] = line2[i] + dif1[i - 1] + trans1[i - 1];
            }
        }

        int menor_tempo;
        if (dif1[etapas - 1] + s1 < dif2[etapas - 1] + s2)
        {
            menor_tempo = dif1[etapas - 1] + s1;
        }
        else
        {
            menor_tempo = dif2[etapas - 1] + s2;
        }

        printf("%d\n", menor_tempo);
    }

    return 0;
}