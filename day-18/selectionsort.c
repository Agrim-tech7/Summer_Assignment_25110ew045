#include <stdio.h>
int main()
 {
    int a[50];
    int n, i, j, min_idx, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
     {
        min_idx = i;
        for(j=i+1; j<n; j++)
         {
            if(a[j] < a[min_idx])
             {
                min_idx = j;
            }
        }
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
    printf("\nSorted array:\n");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}