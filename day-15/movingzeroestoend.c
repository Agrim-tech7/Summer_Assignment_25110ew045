#include <stdio.h>
int main() {
    int a[] = {1, 0, 2, 0, 3, 4, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
     {
        if (a[i] != 0)
         {
            a[count++] = a[i];
        }
    }
    while (count < n)
     {
        a[count++] = 0;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}