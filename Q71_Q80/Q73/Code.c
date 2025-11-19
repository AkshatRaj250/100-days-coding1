//Q73. Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
#define MAX_SIZE 100
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rowSums[MAX_SIZE] = {0}; // Array to store sum of each row
    int rows, cols, i, j;

    // User input for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // User input for the matrix elements
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Add each element to the corresponding row sum
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}