// WAP TO FIND THE GCD OF THE TWO NUMBERS
#include<stdio.h>
int main() {
int N1,N2,temp;
printf("Enter the number N1 : ");
scanf("%d",&N1);
printf("Enter the number N2 : ");
scanf("%d",&N2);
while(N2!=0){
temp=N2;
N2=N1%N2;
N1 = temp;
}
printf("GCD = %d", N1);
return 0;
}