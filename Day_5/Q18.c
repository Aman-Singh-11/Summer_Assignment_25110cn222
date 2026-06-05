// WAP TO CHECK STRONG NUMBER
#include<stdio.h>
int main(){
int n,a,i,sum=0,temp;
printf("Enter the Number : ");
scanf("%d", &n);
temp=n;
while(n!=0){
int fact=1;
a=n%10;
for(i=1;i<=a;i++){
fact=fact*i;
}
sum+=fact;
n=n/10;
}
if(sum==temp){
printf("%d is a Strong Number",temp);
}
else{
printf("%d is not Strong Number ",temp);
}
return 0;
}
