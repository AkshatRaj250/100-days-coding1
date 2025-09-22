/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j, rows;

    // User input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the upper part of the pattern
    for (i = 1; i <= rows; i++) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        // Move to the next line after each row
        printf("\n");
    }

    // Loop to print the lower part of the pattern
    for (i = rows - 1; i >= 1; i--) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}