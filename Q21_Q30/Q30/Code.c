//Q30. Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // User input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Print the result
    printf("Reversed number is: %d\n", reversed);
    return 0;
}