#include<stdio.h>

int main() {

    int N1, N2, i, lcm;

    printf("Enter first number : ");
    scanf("%d", &N1);

    printf("Enter second number : ");
    scanf("%d", &N2);

    for(i = 1; i <= N1 * N2; i++) {
     

        if(i % N1 == 0 && i % N2 == 0) {
            lcm = i;
            break;
        }

    }

    printf("LCM = %d", lcm);

    return 0;
}