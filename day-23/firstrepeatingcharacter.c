#include <stdio.h>
int main()
 {
    char str1[100], str2[100];
    int visited[100] = {0};
    int len1 = 0, len2 = 0, i, j, found, isAnagram = 1;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    if (len1 != len2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for (i = 0; i < len1; i++) 
    {
        found = 0;
        for (j = 0; j < len2; j++)
         {
            if (str1[i] == str2[j] && visited[j] == 0)
             {
                visited[j] = 1;
                found = 1;
                break;
            }
        }
        if (found == 0)
         {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram == 1)
     {
        printf("The strings are anagrams.\n");
    } else
     {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}