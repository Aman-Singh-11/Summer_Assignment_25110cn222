// WAP TO FIND Nth TERM OF FIBONACCI SERIES
#include<stdio.h>
int main(){
int c,a=0,b=1,i,n;
printf("Enter number of terms : ");
scanf("%d",&n);
if(n==1){
printf(" Nth Fibonacci term = 0");
}
else if (n==2){
printf("Fibonacci term = 1");
}
else{
for(i=3;i<=n;i++){
c=a+b;
a=b;
b=c;
}
}
printf("Nth Fibonacci Term = %d",b);
return 0;
}