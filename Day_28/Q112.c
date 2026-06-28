// WAP TO CREATE CONTACT MANAGEMENT SYSTEM.
#include <stdio.h>
struct Contact {
char name[50];
char phone[15];
char email[50];
};
int main() {
struct Contact contact;
printf("===== CONTACT MANAGEMENT SYSTEM =====\n");
printf("Enter Contact Name: ");
scanf(" %[^\n]", contact.name);
printf("Enter Phone Number: ");
scanf("%s", contact.phone);
printf("Enter Email Address: ");
scanf("%s", contact.email);
printf("\n===== CONTACT DETAILS =====\n");
printf("Name         : %s\n", contact.name);
printf("Phone Number : %s\n", contact.phone);
printf("Email Address: %s\n", contact.email);
return 0;
}