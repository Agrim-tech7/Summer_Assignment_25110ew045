#include <stdio.h>
int main()
 {
    char str[100];
    int i = 0, words = 1;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);
    while (str[i] != '\0')
     {
        if (str[i] == ' ')
         {
            words++;
        }
        i++;
    }
    printf("Total words = %d\n", words);
    return 0;
}