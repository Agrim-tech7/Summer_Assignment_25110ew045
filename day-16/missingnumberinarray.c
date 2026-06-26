#include <stdio.h>
int main()
 {
    int a[100];
    int total, size;
    int sum1, sum2 = 0, ans;
    int i;

    printf("Enter total count of numbers: ");
    scanf("%d", &total);

    size = total - 1;

    printf("Enter the numbers:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    sum1 = (total * (total + 1)) / 2;

    for (i = 0; i < size; i++)
    
    {
        sum2 = sum2 + a[i];
    }

    ans = sum1 - sum2;

    printf("Missing number is: %d\n", ans);

    return 0;
}