//  WRITE A PROGRAM TO FIND THE SUM OF N NATURAL NUMBERS 
#include<stdio.h>
int main() {
int NUM,i,SUM=0;
printf("Enter the number upto which the sum have to find : ");
scanf("%d",&NUM);
for(i=1;i<=NUM;i++){
    SUM+=i;
}
    printf("THE SUM OF THE %d Natural number is %d",NUM,SUM);


return 0;
}

                   // Updated on June 1
