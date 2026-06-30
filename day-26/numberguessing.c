#include <stdio.h>
int main()
{
    int secret = 45;
    int guess;
    int attempts = 0;
    printf("Guess the secret number between 1 and 100!\n");
    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > secret)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < secret)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }
    return 0;
}