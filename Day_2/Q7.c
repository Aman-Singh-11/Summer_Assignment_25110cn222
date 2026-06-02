// WRITE A PROGRAM TO FIND PRODUCT OF DIGITS
#include<stdio.h>
int main(){
int n,a,b=1;
printf("Enter a Number to get its digits product : ");
scanf("%d", &n);
while(n>0){
a=n%10;
b=b*a;
n=n/10;
}
printf("The product of digits = %d", b);
return 0;
}
              UPDATED Q7 PROGRAM
