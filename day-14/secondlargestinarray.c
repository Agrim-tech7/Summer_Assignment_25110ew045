#include <stdio.h>
int main()
 {
    int a[100];
    int n, i, largest, second_largest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter  a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    largest = a[0];
    second_largest = -1;
    for(i = 1; i < n; i++)
     {
        if(a[i] > largest) 
        {
            second_largest = largest;
            largest = a[i];
        } else if(a[i] > second_largest && a[i] != largest)
         {
            second_largest = a[i];
        }
    }
    if(second_largest == -1) {
        printf("\nThere is no second largest element\n");
    } else {
        printf("\nSecond largest element: %d\n", second_largest);
    }
    return 0;
}