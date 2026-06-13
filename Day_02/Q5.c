// WRITE A PROGRAM TO FIND THE SUM OF THE DIGITS
#include<stdio.h>
int main() {
int n,a,b=0;
printf("Enter a number To find the sum of the digits : ");
scanf("%d",&n);
while(n!=0){
a=n%10;
b=b+a;
n = n / 10;
}
printf("The Sum of the Digits of the number is = %d",b);
return 0;
}
              // UPDATED TODAY
