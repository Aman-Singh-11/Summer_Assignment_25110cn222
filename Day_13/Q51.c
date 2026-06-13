// WAP TO FIND LARGEST AND THE SMALLEST ELEMENT
#include<stdio.h>
int main(){
int i,n;
printf("Enter the number of the elements : ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements : ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}

int largest = arr[0]; 
int smallest = arr[0];   

for(i=1;i<n;i++){
if(largest<arr[i]){
largest=arr[i];
}

if(arr[i]<smallest){
smallest<arr[i];
}
}
printf("%d is the Largest\n", largest);
printf("%d is the Smallest ",smallest);
return 0;
}