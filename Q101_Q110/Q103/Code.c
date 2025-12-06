#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];  // sum of elements to the right
        if (leftSum == rightSum) {
            return i;  // leftmost pivot index
        }
        leftSum += arr[i];
    }

    return -1;  // no pivot index found
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
