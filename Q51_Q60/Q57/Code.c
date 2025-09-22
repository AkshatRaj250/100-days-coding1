//Find the sum of array elements.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, sum = 0;

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
        sum += arr[i]; // Calculate sum while reading elements
    }

    // Print the sum of the array elements
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}