//Q5. Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask user for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}