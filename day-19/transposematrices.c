#include <stdio.h>
int main()
 {
    int r1, c1, i, j;
    int a[10][10], trans[10][10];
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r1; i++)
     {
        for (j = 0; j < c1; j++)
         {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
     {
        for (j = 0; j < c1; j++) 
        {
            trans[j][i] = a[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c1; i++)
     {
        for (j = 0; j < r1; j++)
         {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}