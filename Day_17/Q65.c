// WAP TO MERGE ARRAYS .
#include <stdio.h>

int main() {
int a[100],b[100],c[200];
int n1, n2, i;
printf("Enter size of 1st array: ");
scanf("%d",&n1);
printf("Enter elements of 1st array:\n");
for(i = 0; i < n1; i++) {
scanf("%d",&a[i]);
}
printf("Enter size of 2nd array: ");
scanf("%d",&n2);
printf("Enter elements of 2nd array:\n");
for(i=0;i<n2;i++) {
scanf("%d", &b[i]);
}
for(i=0;i<n1;i++) {
c[i]= a[i];
}                                     //MERGING ARRAY
for(i=0;i<n2;i++) {
c[n1+i]=b[i];
}
printf("Merged array: { ");
for(i=0; i<n1+n2;i++) {
printf("%d ", c[i]);
}
printf("}");
return 0;
}