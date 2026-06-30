// WAP TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM.
#include<stdio.h>

int main()
{
    int id[5],salary[5],i;
    char name[5][30];

    printf("Enter details of 5 employees:\n");

    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter ID: ");
        scanf("%d",&id[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]",name[i]);

        printf("Enter Salary: ");
        scanf("%d",&salary[i]);
    }

    printf("\nEmployee Records\n");

    for(i=0;i<5;i++)
    {
        printf("\nID: %d\n",id[i]);
        printf("Name: %s\n",name[i]);
        printf("Salary: %d\n",salary[i]);
    }

    return 0;
}