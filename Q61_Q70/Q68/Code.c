//Q68. Delete an element from an array.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, element, i, j, found = 0;

    // User input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // User input for the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the element to be deleted
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Search for the element and delete it if found
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            // Shift elements to the left to fill the gap
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Decrease the size of the array
            break;
        }
    }

    // Print the result
    if (found) {
        printf("Element %d deleted from the array.\n", element);
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}