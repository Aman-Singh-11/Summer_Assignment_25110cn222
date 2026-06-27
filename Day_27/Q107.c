// WAP TO CREATE SALARY MANAGEMENT SYSTEM.
#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basicSalary, hra, da, deduction;
    float grossSalary, netSalary;

    printf("===== SALARY MANAGEMENT SYSTEM =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA
    hra = basicSalary * 0.20;   // 20% HRA
    da = basicSalary * 0.10;    // 10% DA

    printf("Enter Total Deductions: ");
    scanf("%f", &deduction);

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - deduction;

    printf("\n===== SALARY DETAILS =====\n");
    printf("Employee ID      : %d\n", empId);
    printf("Employee Name    : %s\n", name);
    printf("Basic Salary     : %.2f\n", basicSalary);
    printf("HRA (20%%)        : %.2f\n", hra);
    printf("DA (10%%)         : %.2f\n", da);
    printf("Gross Salary     : %.2f\n", grossSalary);
    printf("Deductions       : %.2f\n", deduction);
    printf("Net Salary       : %.2f\n", netSalary);

    return 0;
}