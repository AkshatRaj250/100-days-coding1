//Q37. Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, lcm, max;

    // User input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Calculate LCM
    lcm = max;
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break; // Found the LCM
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}