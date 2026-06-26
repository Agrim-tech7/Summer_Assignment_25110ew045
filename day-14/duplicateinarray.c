#include <stdio.h>
int main() 
{
    int n, i, j, k,a[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nDuplicate elements in the array:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++)
         {
            if(a[i] == a[j]) {
                for(k = 0; k < i; k++)
                 {
                    if(a[k] == a[i]) 
                    {
                        break;
                    }
                }
                if(k == i) {
                    printf("%d\n", a[i]);
                }
                break;
            }
        }
    }
    return 0;
}