#include <stdio.h>
int main()
 {
    int n, i, smallest, largest,a[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    largest = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < smallest) 
        {
            smallest = a[i];
        }
        if(a[i] > largest) 
        {
            largest = a[i];
        }
    }
    printf("\nSmallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    return 0;
}