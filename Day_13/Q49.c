// WAP TO INPUT AND DISPLAY ARRAY
#include<stdio.h>
int main(){
int i,arr[100],n;
printf("Enter the number of the element : ");
scanf("%d", &n);
printf("Enter the elements of the Array : ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("The Array = { ");
for(i=0;i<n;i++){
printf("%d ", arr[i]);
}
printf("}");
return 0;
}
