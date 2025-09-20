//Q32. Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // User input
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n; // Store the original number for comparison

    // Reverse the number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Check if the original number and reversed number are the same
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}