#include <stdio.h>
int main()
 {
    int a[100];
    int n, i, search, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
     {
        if(a[i] == search)
         {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Element not found in the array\n");
    }
    return 0;
}