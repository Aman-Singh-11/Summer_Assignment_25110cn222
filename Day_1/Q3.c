// WRITE A PROGRAM TO FIND THE FACTORIAL OF A NUMBER 
#include<stdio.h>
int main () {
int n,fact=1;
printf("Enter a Number to find the factorial of a number : ");
scanf("%d",&n);
if(n<0){
printf("INVALID INPUT ");
}
else{
for(int i=1;i<=n;i++){
fact = fact * i;
}

printf("The Factorialof %d is %d",n,fact);
}
return 0;
}

            // Updated on June 1