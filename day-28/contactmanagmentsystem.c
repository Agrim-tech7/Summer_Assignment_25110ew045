#include <stdio.h>
struct Contact
{
    char name[50];
    char phone[15];
};
int main()
{
    struct Contact c[50];
    int n, i;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Phone Number: ");
        scanf("%s", c[i].phone);
    }
    printf("\n--- Saved Contacts ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, Phone: %s\n", c[i].name, c[i].phone);
    }
    return 0;
}