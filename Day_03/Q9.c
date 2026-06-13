// WAP TO CHECK THE ENTERED NUMBER IS PRIME OR NOT
#include<stdio.h>
int main (){
int i,n,prime=1;
printf("Enter a number to check it is prime or not: ");
scanf("%d",&n);
if(n<=1){
    prime=1;
}
else{
for(i=2;i<n;i++){
if(n%i==0){
prime = 0;
break;
}
}
}
if(prime==0){
printf("Number is not Prime ");
}
else{
printf("Entered number is Prime ");
}
return 0;
}