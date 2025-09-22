//Count even and odd numbers in an array.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int evenCount = 0, oddCount = 0;

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

    // Loop through the array to count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the counts of even and odd numbers
    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The number of odd elements in the array is: %d\n", oddCount);

    return 0;
}