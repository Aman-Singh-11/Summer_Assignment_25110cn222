// WAP TO FIND SUM AND AVERAGE OF THE ARRAY.
#include <stdio.h>
int main(){
int n,arr[100],i,sum=0;
float Avg;
printf("Enter the number of the elements : ");
scanf("%d", &n);
printf("Enter the elements of the array : ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}
for(i=0;i<n;i++){
sum+=arr[i];
}
Avg=(float)sum/n;
printf("Sum of the Array = %d\n", sum);
printf("Average of the Array = %.2f", Avg);
return 0;
}