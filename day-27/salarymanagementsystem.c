#include <stdio.h>
struct Staff
{
    char name[50];
    float basic;
    float allowance;
    float netSalary;
};
int main()
{
    struct Staff s[100];
    int n, i;
    printf("Enter number of staff members: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for staff %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Basic Salary: ");
        scanf("%f", &s[i].basic);
        printf("Allowances: ");
        scanf("%f", &s[i].allowance);
        s[i].netSalary = s[i].basic + s[i].allowance;
    }
    printf("\n--- Salary Payroll Statement ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, Net Salary: Rs %.2f\n", s[i].name, s[i].netSalary);
    }
    return 0;
}