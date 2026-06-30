#include <stdio.h>
int main()
 {
    int r1, c1, i, j, sum = 0;
    int a[10][10];
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    if (r1 != c1)
     {
        printf("\nError: Matrix must be square for diagonal sum.\n");
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
    for (i = 0; i < r1; i++)
     {
        sum = sum + a[i][i];
    }
    printf("\nSum of principal diagonal elements = %d\n", sum);
    return 0;
}