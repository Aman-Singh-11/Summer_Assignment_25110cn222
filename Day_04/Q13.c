// WAP TO GENERATE FIBONACCI SERIES
#include<stdio.h>
int main(){
int fibN,fibNm1=0,fibNm2=1,i,n;
printf("Enter number of terms : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("%d ",fibNm1);
fibN=fibNm1+fibNm2;
fibNm1=fibNm2;
fibNm2=fibN;
}
return 0;
}