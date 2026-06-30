#include <stdio.h>
int main()
 {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], prod[10][10];
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
     {
        printf("\nError: Columns of Matrix 1 must equal Rows of Matrix 2.\n");
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
        for (j = 0; j < c2; j++)
         {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++)
             {
                prod[i][j] = prod[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("\nResultant Matrix after Multiplication:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++)
         {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}