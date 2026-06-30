#include <stdio.h>
int main()
 {
    int r1, c1, i, j, isSymmetric = 1;
    int a[10][10];
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    if (r1 != c1) {
        printf("\nError: Matrix must be square to check symmetry.\n");
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
        for (j = 0; j < c1; j++) 
        {
            if (a[i][j] != a[j][i]) 
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric == 1)
     {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }
    return 0;
}