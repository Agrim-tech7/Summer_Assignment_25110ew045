#include <stdio.h>
int main() {
    char str[100];
    int visited[100] = {0};
    int i, j, count, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
     {
        if (visited[i] == 1)
         {
            continue;
        }
        count = 1;
        for (j = i + 1; str[j] != '\0'; j++) 
        {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > maxCount)
         {
            maxCount = count;
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character = %c (occurs %d times)\n", maxChar, maxCount);
    return 0;
}