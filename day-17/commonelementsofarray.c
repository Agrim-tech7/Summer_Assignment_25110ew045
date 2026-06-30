#include <stdio.h>
int main() {
    int a[100], common[100];
    int n, i, j, k, flag, duplicate;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
     {
        scanf("%d", &a[i]);
    }
    k=0;
    for(i=0; i<n; i++)
     {
        flag=0;
        for(j=i+1; j<n; j++)
         {
            if(a[i] == a[j])
             {
                flag=1;
                break;
            }
        }
        if(flag == 1)
         {
            duplicate=0;
            for(j=0; j<k; j++)
             {
                if(common[j] == a[i])
                 {
                    duplicate=1;
                    break;
                }
            }
            if(duplicate == 0)
             {
                common[k] = a[i];
                k++;
            }
        }
    }
    printf("\nCommon elements are:\n");
    for(i=0; i<k; i++) {
        printf("%d ", common[i]);
    }
    printf("\n");
    return 0;
}