//Q76. Check if a matrix is symmetric.

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
    bool isSymmetric = true;

    // User input for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only be symmetric if it is square
    if (rows != cols) {
        printf("The matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    // User input for the matrix elements
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Print the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}