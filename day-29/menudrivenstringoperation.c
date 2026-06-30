#include <stdio.h>
int main()
{
    char str[100];
    int choice, length = 0, i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n1. Find Length\n2. Convert to Uppercase\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            while (str[length] != '\0')
            {
                length++;
            }
            printf("Length = %d\n", length);
            break;
        case 2:
            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }
            printf("Uppercase String = %s\n", str);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}