// WAP TO CHECK WHETHER A NUMBER IS PALINDROME
#include<stdio.h>
int main() {
int n,a,b=0,t;
printf("Enter a Number to check it is Palindrome or not : ");
scanf("%d", &n);
t=n;
while(n>0){
a=n%10;
b=b*10+a;
n=n/10;
}
if(t==b)
printf("NUMBER IS PALINDROME");
else
printf("NUMBER IS NOT PALINDROME");
return 0;
} 
                        // UPDATED Q8 PROGRAM
