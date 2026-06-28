// WAP TO FIND COMMON CHARACTERS IN A STRING.
#include <stdio.h>
#include <string.h>

int main() {
char str[100];
int i, j, len;
printf("Enter a string: ");
scanf(" %[^\n]", str);
len = strlen(str);
printf("Common Characters: ");
for (i=0;i<len;i++) {
int count = 1;
if (str[i] == '0')
continue;
for (j=i+1;j<len;j++) {
if (str[i] == str[j]) {
count++;
str[j] = '0';                                  // Mark duplicate character
}
}
if (count>1 && str[i]!= ' ')
printf("%c ", str[i]);
}
return 0;
}