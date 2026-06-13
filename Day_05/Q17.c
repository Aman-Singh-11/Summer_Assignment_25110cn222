// WAP TO CHECK THE PERFECT NUMBER 
#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the number : ");
scanf("%d",&n);
for(i=1;i<n;i++){
if(n%i==0){
sum+=i;
}
}
if(n==sum){
printf("%d is Perfect Number", n);
}
else{
printf("%d is not a Perfect Number ",n);
}
return 0;
}
