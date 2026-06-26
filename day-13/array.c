#include <stdio.h>
int main() 
{
    int a[100],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i = 0;i<n;i++)
     {
        printf("Enter a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("\nThe elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}