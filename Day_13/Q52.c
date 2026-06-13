// WAP TO COUNT EVEN AND ODD ELEMENTS
#include<stdio.h>
int main(){
int n,i;
printf("Enter the number of the elements :");
scanf("%d", &n);
int arr[n];
printf("Enter the Elements : \n");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);
}

int EvnCount=0;
int OddCount=0;


for(i=0;i<n;i++){
if(arr[i]%2==0){
EvnCount++;
}
else{
OddCount++;
}
}
printf("Even elements are = %d\n",EvnCount);
printf("Odd elements are = %d",OddCount);
return 0;
}