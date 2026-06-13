#include<stdio.h>
int main (){
int num1,num2,remainder,result,temp,i;
printf("Enter a Number num1 : ");
scanf("%d",&num1);
printf("Enter a Number num2 : ");
scanf("%d",&num2);
printf("Armstrong Numbers are : ");
for(i=num1;i<=num2;i++){
    result=0;
temp=i;
while(temp!=0){
remainder=temp%10;
result += remainder*remainder*remainder;
temp=temp/10;
}
if(i==result){
printf("%d ",i);
}
}
return 0;
}
