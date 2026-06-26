#include <stdio.h>
int main()
 {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int start = 0, end = n - 1;
    while (start < end)
     {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}