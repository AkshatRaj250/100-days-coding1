//Q29. Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // Use long long to handle large factorials

    // User input
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Calculate the factorial of the number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Print the result
        printf("The factorial of %d is: %lld\n", n, factorial);
    }
    return 0;
}