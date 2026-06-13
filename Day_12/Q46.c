//WAP TO WRITE FUNCTION FOR ARMSTRONG.
#include <stdio.h>
#include <math.h>

int armstrong(int n) {
int temp = n, digit = 0, rem;
int sum = 0;

while (temp != 0) {
digit++;
temp = temp / 10;
}
temp = n;
while (temp != 0) {
rem = temp % 10;
sum = sum + pow(rem, digit);
temp = temp / 10;
}
return (sum == n);
}

int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (armstrong(num))
printf("%d is an Armstrong number", num);
else
printf("%d is not an Armstrong number", num);
return 0;
}