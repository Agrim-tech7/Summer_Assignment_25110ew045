#include <stdio.h>
struct Marksheet
{
    char name[50];
    int sub1;
    int sub2;
    int sub3;
    int total;
    float percentage;
};
int main()
{
    struct Marksheet m[100];
    int n, i;
    printf("Enter number of marksheets to generate: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter data for marksheet %d:\n", i + 1);
        printf("Student Name: ");
        scanf("%s", m[i].name);
        printf("Enter marks for Subject 1, 2, 3: ");
        scanf("%d %d %d", &m[i].sub1, &m[i].sub2, &m[i].sub3);
        m[i].total = m[i].sub1 + m[i].sub2 + m[i].sub3;
        m[i].percentage = m[i].total / 3.0;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n          MARKSHEET           ");
        printf("\n==============================");
        printf("\nName: %s", m[i].name);
        printf("\nSubject 1: %d", m[i].sub1);
        printf("\nSubject 2: %d", m[i].sub2);
        printf("\nSubject 3: %d", m[i].sub3);
        printf("\n------------------------------");
        printf("\nTotal Marks: %d / 300", m[i].total);
        printf("\nPercentage: %.2f%%", m[i].percentage);
    
    }
    return 0;
}