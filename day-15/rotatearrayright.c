#include <stdio.h>
int main()
 {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    d = d % n;
    for (int i = 0; i < d; i++)
     {
        int last = a[n - 1];
        for (int j = n - 1; j > 0; j--)
         {
            a[j] = a[j - 1];
        }
        a[0] = last;
    }
    for (int i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }
    return 0;
}