#include <stdio.h>
int main()
{
    int n, i, j, k, cmp;
    char names[100][100], temp[100];
    printf("Enter number of names: ");
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            k = 0;
            cmp = 0;
            while (names[j][k] != '\0' && names[j + 1][k] != '\0')
            {
                if (names[j][k] != names[j + 1][k])
                {
                    cmp = names[j][k] - names[j + 1][k];
                    break;
                }
                k++;
            }
            if (cmp == 0)
            {
                cmp = names[j][k] - names[j + 1][k];
            }
            if (cmp > 0)
            {
                k = 0;
                while (names[j][k] != '\0')
                {
                    temp[k] = names[j][k];
                    k++;
                }
                temp[k] = '\0';
                k = 0;
                while (names[j + 1][k] != '\0')
                {
                    names[j][k] = names[j + 1][k];
                    k++;
                }
                names[j][k] = '\0';
                k = 0;
                while (temp[k] != '\0')
                {
                    names[j + 1][k] = temp[k];
                    k++;
                }
                names[j + 1][k] = '\0';
            }
        }
    }
    printf("\nNames sorted alphabetically:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}