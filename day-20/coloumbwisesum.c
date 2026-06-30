#include <stdio.h>
int main()
 {
    int r1, c1, i, j, colSum;
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
    printf("\nColumn-wise Sum:\n");
    for (j = 0; j < c1; j++) 
    {
        colSum = 0;
        for (i = 0; i < r1; i++)
         {
            colSum = colSum + a[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
    return 0;
}