#include <stdio.h>
int main() {
    int a[100],i,j,n,freq[100],count;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter[%d]: ", i);
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) 
    {
        count = 1;
        for(j = i + 1; j < n; j++)
         {
            if(a[i] == a[j])
             {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) 
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of elements:\n");
    for(i = 0; i < n; i++) 
    {
        if(freq[i] != 0)
         {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
    return 0;
}