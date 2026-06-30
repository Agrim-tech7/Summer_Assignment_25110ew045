#include <stdio.h>
int main()
{
    int ans1, ans2;
    int score = 0;
    printf("Q1. What is the size of an int data type in C? (Enter choice 1-3)\n");
    printf("1. 1 Byte\n2. 2 or 4 Bytes\n3. 8 Bytes\nYour answer: ");
    scanf("%d", &ans1);
    if (ans1 == 2)
    {
        score++;
    }
    printf("\nQ2. Which symbol is used for multi-line comments in C?\n");
    printf("1. //\n2. #\n3. /* */\nYour answer: ");
    scanf("%d", &ans2);
    if (ans2 == 3)
    {
        score++;
    }
    printf("\nQuiz finished! Your final score is %d out of 2.\n", score);
    return 0;
}