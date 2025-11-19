//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

bool areDiagonalElementsDistinct(int mat[][100], int n) {
    int seen[100];  // assuming max size of matrix is 100x100
    int count = 0;

    for (int i = 0; i < n; i++) {
        int current = mat[i][i];
        // Check if current is already seen
        for (int j = 0; j < count; j++) {
            if (seen[j] == current)
                return false;
        }
        seen[count++] = current;
    }
    return true;
}

int main() {
    int mat[3][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;

    if (areDiagonalElementsDistinct(mat, n))
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}