// WAP TO LINEAR SEARCH 
#include<stdio.h>
int main(){
int n,i,num,found=0;
printf("Enter the number of the elements : ");
scanf("%d",&n);
int arr[n];
printf("Enter the Elements :\n ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("Enter the number to be searched : ");
scanf("%d",&num);
for(i=0;i<n;i++){
if(arr[i]==num){
found=1;
break;
}
}
if(found)
printf("%d is found at place %d",num,i+1);
else
printf("NOT FOUND");
return 0;
}