//Q66. Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, element, i, j;

    // User input for the size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    // User input for the sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the element
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element at the found position
    arr[i] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}