//Perform diagonal traversal of a matrix.

#include <stdio.h>

void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
    for (int d = 0; d < rows + cols - 1; d++) {
        int row = d < cols ? 0 : d - cols + 1;
        int col = d < cols ? d : cols - 1;
        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3, cols = 4;
    diagonalTraversal(rows, cols, matrix);
    return 0;
}