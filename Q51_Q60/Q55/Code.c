/*Write a program to print all the prime numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int i, j, n, isPrime;

    // User input for the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through each number from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime

        // Check if i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If isPrime is still 1, then i is a prime number
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}