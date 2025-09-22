//Count positive, negative, and zero elements in an array.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

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

    // Loop through the array to count positive, negative, and zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts of positive, negative, and zero elements
    printf("The number of positive elements in the array is: %d\n", positiveCount);
    printf("The number of negative elements in the array is: %d\n", negativeCount);
    printf("The number of zero elements in the array is: %d\n", zeroCount);

    return 0;
}