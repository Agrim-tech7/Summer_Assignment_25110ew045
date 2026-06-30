#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    char dept[30];
};
int main()
{
    struct Employee e[100];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Department: ");
        scanf("%s", e[i].dept);
    }
    printf("\n--- Employee Directory ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Dept: %s\n", e[i].id, e[i].name, e[i].dept);
    }
    return 0;
}