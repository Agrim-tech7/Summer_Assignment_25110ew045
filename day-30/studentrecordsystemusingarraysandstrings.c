#include <stdio.h>
int main()
{
    int roll[50];
    char name[50][30];
    float marks[50];
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", roll[i], name[i], marks[i]);
    }
    return 0;
}