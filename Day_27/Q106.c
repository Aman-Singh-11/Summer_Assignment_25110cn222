// WAP TO CREATE EMPLOYEE MANAGEMENT SYSTEM.
#include <stdio.h>

struct Employee {
int id;
char name[50];
float salary;
};
int main() {
struct Employee emp;
printf("===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
printf("Enter Employee ID: ");
scanf("%d", &emp.id);
printf("Enter Employee Name: ");
scanf(" %[^\n]", emp.name);
printf("Enter Employee Salary: ");
scanf("%f", &emp.salary);

printf("\n===== EMPLOYEE DETAILS =====\n");
printf("Employee ID     : %d\n", emp.id);
printf("Employee Name   : %s\n", emp.name);
printf("Employee Salary : %.2f\n", emp.salary);
return 0;
}