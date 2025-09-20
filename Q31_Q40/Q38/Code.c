//Q38. Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // User input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num > 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add it to the sum
        num /= 10;       // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}