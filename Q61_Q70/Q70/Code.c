//Q70. Rotate an array to the right by k positions.

#include <stdio.h>
#define MAX_SIZE 100
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[MAX_SIZE], n, k, i;
    int temp[MAX_SIZE];

    // User input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // User input for the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the number of positions to rotate
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // Normalize k to avoid unnecessary rotations
    k = k % n;

    // Copy the last k elements to a temporary array
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from the temporary array to the front
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    printf("Array after rotating to the right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}