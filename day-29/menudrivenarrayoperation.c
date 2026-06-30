#include <stdio.h>
int main()
{
    int arr[100]; 
    int n, choice, i, sum = 0, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n1. Display Array\n2. Sum of Elements\n3. Find Maximum\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Array elements: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                sum = sum + arr[i];
            }
            printf("Sum = %d\n", sum);
            break;
        case 3:
            max = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            printf("Maximum element = %d\n", max);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}