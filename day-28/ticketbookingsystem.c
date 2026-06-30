#include <stdio.h>
struct Ticket
{
    int ticketId;
    char passengerName[50];
    char destination[50];
};
int main()
{
    struct Ticket t[50];
    int n, i;
    printf("Enter number of tickets to book: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter booking details for passenger %d:\n", i + 1);
        printf("Ticket ID: ");
        scanf("%d", &t[i].ticketId);
        printf("Passenger Name: ");
        scanf("%s", t[i].passengerName);
        printf("Destination: ");
        scanf("%s", t[i].destination);
    }
    printf("\n--- Booked Passenger List ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Ticket ID: %d, Passenger: %s, Route: %s\n", t[i].ticketId, t[i].passengerName, t[i].destination);
    }
    return 0;
}