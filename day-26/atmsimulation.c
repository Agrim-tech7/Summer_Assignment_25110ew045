#include <stdio.h>
int main()
{
    int balance = 5000;
    int choice, amount;
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Your balance is: Rs %d\n", balance);
    }
    else if (choice == 2)
    {
        printf("Enter deposit amount: ");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("Deposited successfully. New balance: Rs %d\n", balance);
    }
    else if (choice == 3)
    {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);
        if (amount > balance)
        {
            printf("Insufficient balance!\n");
        }
        else
        {
            balance = balance - amount;
            printf("Withdrew successfully. Remaining balance: Rs %d\n", balance);
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}