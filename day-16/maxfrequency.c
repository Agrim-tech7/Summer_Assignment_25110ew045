#include <stdio.h>
int main()
 {
    int a[100];
    int n;
    int i, j;
    int count, max_count = 0, ans;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        count = 0;
        
        for (j = 0; j < n; j++)
         {
            if (a[i] == a[j]) 
            {
                count++;
            }
        }

        if (count > max_count)
         {
            max_count = count;
            ans = a[i];
        }
    }

    printf("Most frequent element is: %d\n", ans);
    printf("It appears %d times\n", max_count);

    return 0;
}