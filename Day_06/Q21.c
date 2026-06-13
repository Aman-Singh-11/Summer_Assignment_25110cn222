// WAP TO CONVERT DECIMAL INTO BINARY
#include <stdio.h>

int main() {
 int intPart, binary[50], i = 0;
    float num, fracPart;

    printf("Enter decimal number: ");
    scanf("%f", &num);

    
    intPart = (int)num;                           //Separate integer and fractional part 
    fracPart = num - intPart;

   
    while (intPart > 0) {
        binary[i] = intPart % 2;
        intPart = intPart / 2;                     //Integer part to binary 
        i++;
    }

    printf("Binary = ");

    
    for (int j = i - 1; j >= 0; j--) {                  // Print integer binary in reverse 
        printf("%d", binary[j]);
    }

    printf(".");

    for (int k = 0; k < 6; k++) {
        fracPart = fracPart * 2;                               // Fractional part to binary 
                                                                
        if (fracPart >= 1) {
            printf("1");
            fracPart = fracPart - 1;
        }
        else {
            printf("0");
        }
    }

    return 0;
}