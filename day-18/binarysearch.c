#include <stdio.h>
int main()
 {
    int a[50];
    int n, i, key, low, high, mid, flag;
    printf("Enter number of elements (sorted order): ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    flag = 0;
    while(low <= high)
     {
        mid = (low + high) / 2;
        if(a[mid] == key) 
        {
            flag = 1;
            break;
        }
        else if(a[mid] < key)
         {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    if(flag == 1)
     {
        printf("\nElement found at index: %d\n", mid);
    }
    else
     {
        printf("\nElement not found\n");
    }
    return 0;
}