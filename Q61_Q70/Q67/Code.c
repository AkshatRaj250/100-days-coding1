//Q67. Insert an element in an array at a given position.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, element, position, i;

    // User input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // User input for the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // User input for the position to insert the element
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}