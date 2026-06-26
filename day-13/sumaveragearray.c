#include <stdio.h>
int main()
 {
    int sum=0,a[100],n,i;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter a[%d]: ",i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = (float)sum / n;
    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", avg);
    return 0;
}