#include <stdio.h>
int main()
{
    int n, i, j, k, len1, len2;
    char words[100][100], temp[100];
    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            len1 = 0;
            while (words[j][len1] != '\0')
            {
                len1++;
            }
            len2 = 0;
            while (words[j + 1][len2] != '\0')
            {
                len2++;
            }
            if (len1 > len2)
            {
                k = 0;
                while (words[j][k] != '\0')
                {
                    temp[k] = words[j][k];
                    k++;
                }
                temp[k] = '\0';
                k = 0;
                while (words[j + 1][k] != '\0')
                {
                    words[j][k] = words[j + 1][k];
                    k++;
                }
                words[j][k] = '\0';
                k = 0;
                while (temp[k] != '\0')
                {
                    words[j + 1][k] = temp[k];
                    k++;
                }
                words[j + 1][k] = '\0';
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }
    return 0;
}