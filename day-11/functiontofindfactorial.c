#include <stdio.h>
int findFactorial(int num)
 {
    int fact = 1;
    for (int i = 1; i <= num; i++)
     {
        fact = fact * i;
    }

    return fact;
}

int main() 
{
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = findFactorial(number);
    printf("The factorial of %d is: %d\n", number, result);

    return 0;
}