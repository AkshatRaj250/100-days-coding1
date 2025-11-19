//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
#include <string.h>
#define MAX_DIGITS 10

int main() {
    char number[100];
    int digitCount[MAX_DIGITS] = {0};
    int i, maxCount = 0, mostFrequentDigit = -1;

    // User input for the integer number
    printf("Enter an integer number: ");
    scanf("%s", number);

    // Count occurrences of each digit
    for (i = 0; i < strlen(number); i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            digitCount[number[i] - '0']++;
        }
    }

    // Find the digit with the maximum count
    for (i = 0; i < MAX_DIGITS; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    // Print the result
    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    } else {
        printf("No digits found in the input.\n");
    }

    return 0;
}