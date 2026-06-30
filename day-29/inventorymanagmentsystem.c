#include <stdio.h>
struct Item
{
    int id;
    char name;
    int quantity;
    float price;
};
int main()
{
    struct Item items[100];
    int n, i;
    printf("Enter number of distinct items in inventory: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Item ID: ");
        scanf("%d", &items[i].id);
        printf("Item Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Price per unit: ");
        scanf("%f", &items[i].price);
    }
    printf("\n--- Current Stock Inventory Status ---\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Qty: %d | Price: Rs %.2f | Total Value: Rs %.2f\n", 
               items[i].id, items[i].name, items[i].quantity, items[i].price, items[i].quantity * items[i].price);
    }
    return 0;
}