// WAP TO REVERSE ARRAY .
#include<stdio.h>
int main(){
int n,i;
printf("Enter the number of the Element : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements  : ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("The Reversed Array =  { ");
for(i=n;i>0;i--){
printf("%d ",arr[i-1]);
}
printf("}");
return 0;
}