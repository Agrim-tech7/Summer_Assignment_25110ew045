#include <stdio.h>
int main()
 {
    int r1, c1, i, j, rowSum;
    int a[10][10];
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
    printf("\nRow-wise Sum:\n");
    for (i = 0; i < r1; i++)
     {
        rowSum = 0;
        for (j = 0; j < c1; j++) 
        {
            rowSum = rowSum + a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    return 0;
}