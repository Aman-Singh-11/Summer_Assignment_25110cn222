// WRITE A PROGRAM TO FIND PRODUCT OF THE DIGITS
#include<stdio.h>
int main() {
int n,a,b=1;
printf("Enter the Number to get its Digit's product : ");
scanf("%d", &n);
while(n>0){
a=n%10;
b=b*a;
n=n/10;
}
printf("The Product of the digits = %d", b);
return 0;

}