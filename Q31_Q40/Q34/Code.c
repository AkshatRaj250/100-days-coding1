//Q34. Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // User input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to the square root of num
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}