//Q69. Find the second largest element in an array.

#include <stdio.h>
#define MAX_SIZE 100
#include <limits.h>

int main() {
    int arr[MAX_SIZE], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    // User input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // User input for the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Print the result
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}