// WRITE A PROGRAM TO REVERSE A NUMBER
#include<stdio.h>
int main (){
int n,a,b=0;
printf("Enter a number to find its Reverse : ");
scanf("%d",&n);
while(n>0){
a = n % 10;
b = b*10+a;
n = n/10;
}
printf("REVERSE OF THAT NUMBER IS : %d", b);
return 0;


}
             //  UPDATED Q6 PROGRAM
