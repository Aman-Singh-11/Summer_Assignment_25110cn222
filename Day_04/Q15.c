#include<stdio.h>
int main (){
int num,remainder,result=0,temp;
printf("Enter a Number to check it is Armstrong or not : ");
scanf("%d",&num);
temp=num;
while(num!=0){
remainder=num%10;
result += remainder*remainder*remainder;
num=num/10;
}
if(temp==result){
printf("%d is an Armstrong Number ",temp);
}
else{
printf("%d is not an Armstrong Number ", temp);
}
return 0;
}
