#include <stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct Book b[50];
    int n, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &b[i].id);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Author: ");
        scanf("%s", b[i].author);
    }
    printf("\n--- Library Catalog ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Title: %s, Author: %s\n", b[i].id, b[i].title, b[i].author);
    }
    return 0;
}