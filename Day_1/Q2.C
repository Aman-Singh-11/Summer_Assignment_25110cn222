// WRITE A PROGRAM TO PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER
#include<stdio.h>
int main() {
int n,m;
printf("Enter the number of which the table have to find : ");
scanf("%d", &n);
printf("Enter the number upto which the table is required : ");
scanf("%d",&m);
printf(" Multiplication Table of %d is :\n ",n);
for(int i=1;i<=m;i++){
printf("%d\n", n * i);
}
return 0;
}
            // Updated on June 1
