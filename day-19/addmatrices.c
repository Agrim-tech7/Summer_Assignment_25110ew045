#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2, i, j;
    int a[10][10], b[10][10], sum[10][10];
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);
    if (r1 != r2 || c1 != c2)
     {
        printf("\nError: Matrices must have identical dimensions for addition.\n");
        return 0;
    }
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r1; i++)
     {
        for (j = 0; j < c1; j++)
         {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < r2; i++)
     {
        for (j = 0; j < c2; j++)
         {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
     {
        for (j = 0; j < c1; j++)
         {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nResultant Matrix after Addition:\n");
    for (i = 0; i < r1; i++)
     {
        for (j = 0; j < c1; j++)
         {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}