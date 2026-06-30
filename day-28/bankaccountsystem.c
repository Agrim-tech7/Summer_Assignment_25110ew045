#include <stdio.h>
struct Account
{
    int accNum;
    char holderName[50];
    float balance;
};
int main()
{
    struct Account acc[50];
    int n, i;
    printf("Enter number of bank accounts: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for account %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &acc[i].accNum);
        printf("Holder Name: ");
        scanf("%s", acc[i].holderName);
        printf("Initial Balance: ");
        scanf("%f", &acc[i].balance);
    }
    printf("\n--- Account Directory ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Acc No: %d, Holder: %s, Balance: Rs %.2f\n", acc[i].accNum, acc[i].holderName, acc[i].balance);
    }
    return 0;
}