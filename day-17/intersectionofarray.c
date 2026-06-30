#include <stdio.h>
int main() {
    int a1[50], a2[50], inter[50];
    int n1, n2, i, j, m, flag, duplicate;
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
    m=0;
    for(i=0; i<n1; i++)
     {
        flag=0;
        for(j=0; j<n2; j++) 
        {
            if(a1[i] == a2[j])
             {
                flag=1;
                break;
            }
        }
        if(flag == 1)
         {
            duplicate=0;
            for(j=0; j<m; j++)
             {
                if(inter[j] == a1[i])
                 {
                    duplicate=1;
                    break;
                }
            }
            if(duplicate == 0)
             {
                inter[m] = a1[i];
                m++;
            }
        }
    }
    printf("\nIntersection of arrays:\n");
    for(i=0; i<m; i++)
     {
        printf("%d ", inter[i]);
    }
    printf("\n");
    return 0;
}