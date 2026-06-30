#include <stdio.h>
int main()
 {
    int a1[100], a2[100], merged[200];
    int n1, n2, i, k;
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
        merged[k] = a1[i];
        k++;
    }
    for(i=0; i<n2; i++)
     {
        merged[k] = a2[i];
        k++;
    }
    printf("\nMerged array:\n");
    for(i=0; i<k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}