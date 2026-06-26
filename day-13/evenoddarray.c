#include <stdio.h>
int main()
 {
    int a[100],i,n;
    int even_count = 0, odd_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(i = 0; i < n; i++)
     {
        printf("Enter  a[%d]: ",i);
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\nTotal even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);
    return 0;
}