// WAP TO CHECK WHETHER A NUMBER IS PRIME . 
#include<stdio.h>
int main(){
int n,i,flag=1;
printf("Enter a Number to check it is Prime or not : ");
scanf("%d",&n);
if(n<=1){
flag=0;
}
else {
for(i=2;i<n;i++){
if(n%i==0){
flag=0;
break;
}
}
}
if(flag==0)
printf("NUMBER IS NOT PRIME");
else
printf("NUMBER IS PRIME");

return 0;
}