//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Display results
    printf("\nSum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n", num1 * num2);

    // Check for division by zero
    if (num2 != 0)
        printf("Quotient: %.2f\n", num1 / num2);
    else
        printf("Quotient: Undefined (division by zero)\n");

    return 0;
}