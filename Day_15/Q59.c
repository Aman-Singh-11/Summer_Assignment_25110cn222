// WAP TO ROTATE ARRAY RIGHT.
#include<stdio.h>
int main (){
int arr[100],n,i,temp;
printf("Enter the size of the array : ");
scanf("%d", &n);
printf("Enter array element : ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
temp=arr[n-1];
for(i=n-2;i>=0;i--){
arr[i+1]=arr[i];
}
arr[0]=temp;
printf("Array after Right rotation = { ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("}");
return 0;
}