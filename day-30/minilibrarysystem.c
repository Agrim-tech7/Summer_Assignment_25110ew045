#include <stdio.h>
int main()
{
    int bookId[50];
    char title[50][30];
    int n, choice, i, searchId, found;
    printf("Enter initial number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter ID and Title for book %d: ", i + 1);
        scanf("%d %s", &bookId[i], title[i]);
    }
    printf("\n1. Display Books\n2. Search Book by ID\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\n--- Library Collection ---\n");
        for (i = 0; i < n; i++)
        {
            printf("ID: %d | Title: %s\n", bookId[i], title[i]);
        }
    }
    else if (choice == 2)
    {
        printf("Enter Book ID to search: ");
        scanf("%d", &searchId);
        found = 0;
        for (i = 0; i < n; i++)
        {
            if (bookId[i] == searchId)
            {
                printf("Book Found! Title: %s\n", title[i]);
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Book not found.\n");
        }
    }
    return 0;
}