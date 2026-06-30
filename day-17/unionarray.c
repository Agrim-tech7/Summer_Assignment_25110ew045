#include <stdio.h>
int main() {
    int a1[100], a2[100], u[100];
    int n1, n2, i, j, k, flag;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for(i=0; i<n1; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for(i=0; i<n2; i++) {
        scanf("%d", &a2[i]);
    }
    k=0;
    for(i=0; i<n1; i++)
     {
        flag=0;
        for(j=0; j<k; j++)
         {
            if(u[j] == a1[i])
             {
                flag=1;
                break;
            }
        }
        if(flag == 0)
         {
            u[k] = a1[i];
            k++;
        }
    }
    for(i=0; i<n2; i++)
     {
        flag=0;
        for(j=0; j<k; j++)
         {
            if(u[j] == a2[i])
             {
                flag=1;
                break;
            }
        }
        if(flag == 0)
         {
            u[k] = a2[i];
            k++;
        }
    }
    printf("\nUnion of arrays:\n");
    for(i=0; i<k; i++) {
        printf("%d ", u[i]);
    }
    printf("\n");
    return 0;
}