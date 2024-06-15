#include <stdio.h>
#include<string.h>

void displayTicket(const char *flightNumber, const char *source, const char *destination, const char *passengerName,
                   int *numAdults, int *numChildren, const char *departureTime)
{
    printf("\n\n\n\n");
    printf("\n---- Flight Ticket ----\n");
    printf("Flight Number: %s\n", flightNumber);
    printf("From: %s\n", source);
    printf("To: %s\n", destination);
    printf("Passenger Name: %s\n", passengerName);
    printf("Number of Adults: %d\n", numAdults);
    printf("Number of Children: %d\n", numChildren);
    printf("Departure Time: %s\n", departureTime);
    printf("Enjoy your flight!\n");
    printf("-----------------------\n");
}

int main() {
    // Variables to store user input ==>
    char flightNumber[50];
    char source[50];
    char destination[50];
    char passengerName[50];
    int numAdults, numChildren;
    char departureTime[20];

    // Get user input ==>
    printf("Enter flight number: ");
    scanf("%s", flightNumber);

    printf("Enter source city: ");
    scanf("%s", source);

    printf("Enter destination city: ");
    scanf("%s", destination);

    printf("Enter passenger name: ");
    scanf("%s", passengerName);

    printf("Enter number of adults: ");
    scanf("%d", &numAdults);

    printf("Enter number of children: ");
    scanf("%d", &numChildren);

    printf("Enter departure time: ");
    scanf("%s", departureTime);

    // calling the fucntion Display flight ticket ==>
    displayTicket(flightNumber, source, destination, passengerName, &numAdults, &numChildren, departureTime);

    return 0;
}