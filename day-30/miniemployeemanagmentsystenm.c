#include <stdio.h>
int main()
{
    int empId[50];
    char empName[50][30];
    float salary[50];
    int n, i;
    float totalSalary = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &empId[i]);
        printf("Name: ");
        scanf("%s", empName[i]);
        printf("Salary: ");
        scanf("%f", &salary[i]);
        totalSalary = totalSalary + salary[i];
    }
    printf("\n--- Employee List ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Salary: Rs %.2f\n", empId[i], empName[i], salary[i]);
    }
    printf("\nTotal Monthly Payroll Expense: Rs %.2f\n", totalSalary);
    return 0;
}