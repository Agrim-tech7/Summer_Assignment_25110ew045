#include <stdio.h>
int main()
 {
    char str[200], longest[100];
    int i = 0, j, wordLen, maxLen = 0, startIdx;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);
    while (str[i] != '\0') 
    {
        while (str[i] == ' ') 
        {
            i++;
        }
        if (str[i] == '\0') {
            break;
        }
        startIdx = i;
        wordLen = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            wordLen++;
            i++;
        }
        if (wordLen > maxLen) 
        {
            maxLen = wordLen;
            for (j = 0; j < wordLen; j++) 
            {
                longest[j] = str[startIdx + j];
            }
            longest[wordLen] = '\0';
        }
    }
    printf("Longest word = %s\n", longest);
    return 0;
}