
#include <stdio.h>
int main()
 {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, j, match, isRotation = 0;
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }
    for (i = 0; i < len1; i++) 
    {
        match = 1;
        for (j = 0; j < len2; j++)
         {
            if (str1[(i + j) % len1] != str2[j])
             {
                match = 0;
                break;
            }
        }
        if (match == 1)
         {
            isRotation = 1;
            break;
        }
    }
    if (isRotation == 1) 
    {
        printf("String is a rotation.\n");
    } else {
        printf("Not a rotation.\n");
    }
    return 0;
}