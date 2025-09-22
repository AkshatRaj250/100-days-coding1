//Find the maximum and minimum element in an array.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int max, min;

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

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Loop through the array to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}