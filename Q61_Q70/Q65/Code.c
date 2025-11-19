//Q65. Search in a sorted array using binary search.

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, target, left, right, mid, found = 0;

    // User input for the size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    // User input for the sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Binary search algorithm
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            found = 1;
            break;
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Print the result
    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}