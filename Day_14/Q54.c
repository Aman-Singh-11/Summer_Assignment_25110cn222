// WAP TO FREQUENCY OF AN ELEMENT.
#include <stdio.h>

int main(){
int n,i,num,count=0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements:\n");
for(i = 0;i<n;i++){
scanf("%d", &arr[i]);
}
printf("Enter the element whose frequency is to be found: ");
scanf("%d", &num);
for(i = 0; i < n; i++){
if(arr[i] == num){
count++;
}
}
printf("Frequency of %d = %d", num, count);
return 0;
}