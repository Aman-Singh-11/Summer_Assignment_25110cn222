// WAP TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS.
#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    int marks;
};

int main(){
struct Student s[5];
int i;

    printf("Enter details of 5 students:\n");

for(i=0;i<5;i++){
    printf("\nStudent %d\n", i + 1);

    printf("Enter Roll Number: ");
    scanf("%d", &s[i].roll);

printf("Enter Name: ");
scanf("%s", s[i].name);

printf("Enter Marks: ");
scanf("%d", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");

for(i=0;i<5;i++){
printf("\nStudent %d\n", i + 1);
printf("Roll Number : %d\n", s[i].roll);
printf("Name        : %s\n", s[i].name);
printf("Marks       : %d\n", s[i].marks);
}

    return 0;
}