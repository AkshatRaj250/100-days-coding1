#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];    // Initialize to first element (handles all negative case)
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        // Either start a new subarray at arr[i] or extend the current subarray
        if (currentSum + arr[i] > arr[i]) {
            currentSum += arr[i];
        } else {
            currentSum = arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSum);

    return 0;
}
