//  WAP TO CREATE TICKET BOOKING SYSTEM.
#include <stdio.h>

int main() {
char name[50];
int choice, tickets;
float price, total;
printf("===== TICKET BOOKING SYSTEM =====\n");
printf("Enter Customer Name: ");
scanf(" %[^\n]", name);
printf("\nSelect Ticket Type:\n");
printf("1. Movie Ticket (Rs. 200)\n");
printf("2. Bus Ticket (Rs. 500)\n");
printf("3. Train Ticket (Rs. 800)\n");
printf("Enter Your Choice: ");
scanf("%d", &choice);
printf("Enter Number of Tickets: ");
scanf("%d", &tickets);
switch (choice) {
case 1:
price = 200;
break;
case 2:
price = 500;
break;
case 3:
price = 800;
break;
default:
printf("Invalid Choice!\n");
return 0;
}
total = price * tickets;
printf("\n===== BOOKING DETAILS =====\n");
printf("Customer Name   : %s\n", name);
printf("Number of Tickets: %d\n", tickets);
printf("Ticket Price    : Rs. %.2f\n", price);
printf("Total Amount    : Rs. %.2f\n", total);
printf("Booking Successful!\n");
return 0;
}