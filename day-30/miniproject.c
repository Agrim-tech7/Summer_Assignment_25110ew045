#include <stdio.h>
void displayItems(int ids[], char names[][50], int n)
{
    int i;
    printf("\n--- Item List ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s\n", ids[i], names[i]);
    }
}
int main()
{
    int ids[50];
    char names[50][50];
    int n, i;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter ID for item %d: ", i + 1);
        scanf("%d", &ids[i]);
        printf("Enter Name for item %d: ", i + 1);
        scanf("%s", names[i]);
    }
    displayItems(ids, names, n);
    return 0;
}