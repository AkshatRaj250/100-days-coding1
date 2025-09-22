//Read and print elements of a one-dimensional array.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;

    // User input for number of elements
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Check if the number of elements is within the allowed range
    if (n < 1 || n > MAX_SIZE) {
        printf("Error: Number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // User input for array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}