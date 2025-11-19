//Q72. Find the sum of all elements in a matrix.

#include <stdio.h>
#define MAX_SIZE 100
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j;
    int sum = 0;

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
            sum += matrix[i][j]; // Add each element to sum
        }
    }

    // Print the sum of all elements
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}