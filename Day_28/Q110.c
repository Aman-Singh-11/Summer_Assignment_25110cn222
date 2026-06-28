// WAP TO CREATE BANK ACCOUNT SYSTEM.
#include <stdio.h>

int main() {
int accountNo, choice;
char name[50];
float balance, amount;
printf("===== BANK ACCOUNT SYSTEM =====\n");
printf("Enter Account Number: ");
scanf("%d", &accountNo);
printf("Enter Account Holder Name: ");
scanf(" %[^\n]", name);
printf("Enter Initial Balance: ");
scanf("%f", &balance);
do {
printf("\n===== MENU =====\n");
printf("1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");
printf("Enter Your Choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Current Balance: %.2f\n", balance);
break;
case 2:
printf("Enter Deposit Amount: ");
scanf("%f", &amount);
if (amount > 0) {
balance += amount;
printf("Deposit Successful!\n");
printf("Updated Balance: %.2f\n", balance);
}
else {
printf("Invalid Amount!\n");
}
break;
case 3:
printf("Enter Withdrawal Amount: ");
scanf("%f", &amount);
if (amount > 0 && amount <= balance) {
balance -= amount;
printf("Withdrawal Successful!\n");
printf("Remaining Balance: %.2f\n", balance);
} else {
printf("Insufficient Balance or Invalid Amount!\n");
}
break;
case 4:
printf("Thank you for using the Bank Account System.\n");
break;
default:
printf("Invalid Choice! Please try again.\n");
}
} while (choice != 4);
return 0;
}