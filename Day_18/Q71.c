// WAP TO BINARY SEARCH
#include <stdio.h>
int main(){
int num[20], size, item;
int start, end, middle;
printf("Enter size: ");
scanf("%d", &size);
printf("Enter sorted elements: ");
for(int k = 0; k < size; k++){
scanf("%d", &num[k]);
}
printf("Enter element to search: ");
scanf("%d", &item);
start = 0;
end = size - 1;
while(start <= end){
middle = (start + end) / 2;
if(num[middle] == item){
printf("Element found");
return 0;
}
else if(item > num[middle]){
start = middle + 1;
}
else{
end = middle - 1;
}
}
printf("Element not found");
return 0;
}