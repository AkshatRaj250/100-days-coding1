//Q41. Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#define MAX_DIGITS (sizeof(int) * CHAR_BIT)
int main()
{
    int num, first_digit, last_digit, num_digits = 0, temp_num, swapped_num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single digit numbers
    if(num < 10){
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Calculate number of digits and identify first and last digits
    temp_num = num;
    last_digit = temp_num % 10;

    while(temp_num >= 10){
        temp_num /= 10;
        num_digits++;
    }

    // After the loop, temp_num holds the first digit
    first_digit = temp_num;
    num_digits++; // To account for the first digit
    swapped_num = last_digit * pow(10, num_digits - 1); // Place last digit at the front
    swapped_num += (num % (int)pow(10, num_digits - 1)) - last_digit; // Add middle part without last digit
    swapped_num += first_digit; // Place first digit at the end

    // Output the result
    printf("Swapped number: %d\n", swapped_num);

    return 0;
}