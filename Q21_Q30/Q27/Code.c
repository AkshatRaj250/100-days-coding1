//Q27. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // User input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // The ith odd number is (2*i - 1)
    }

    // Print the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}