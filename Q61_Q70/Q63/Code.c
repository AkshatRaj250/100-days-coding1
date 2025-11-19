//Merge two arrays.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[2 * MAX_SIZE];
    int n1, n2, i, j;

    // User input for number of elements in the first array
    printf("Enter the number of elements in the first array (max %d): ", MAX_SIZE);
    scanf("%d", &n1);

    // Check if the number of elements is within the allowed range
    if (n1 < 1 || n1 > MAX_SIZE) {
        printf("Error: Number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // User input for elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        mergedArr[i] = arr1[i]; // Copy to merged array
    }

    // User input for number of elements in the second array
    printf("Enter the number of elements in the second array (max %d): ", MAX_SIZE);
    scanf("%d", &n2);

    // Check if the number of elements is within the allowed range
    if (n2 < 1 || n2 > MAX_SIZE) {
        printf("Error: Number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // User input for elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        mergedArr[n1 + i] = arr2[i]; // Copy to merged array
    }

    // Print the merged array
    printf("The merged array is:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}