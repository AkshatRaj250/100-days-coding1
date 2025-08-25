//Q8. Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Use formula: Sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}