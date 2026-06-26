#include <stdio.h>
int main() 
{
    int a[100];
    int n, target;
    int i, j;
    int found = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target)
             {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pair found\n");
    }

    return 0;
}